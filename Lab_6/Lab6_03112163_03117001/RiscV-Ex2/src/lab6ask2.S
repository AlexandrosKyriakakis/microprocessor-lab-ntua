#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

.globl main

.text

main:
# Einai synexomenhs leitourgias. Molis teleiwsei ksekina apo thn arxh.
li x28, 0xFFFF
li x29, GPIO_INOUT
sw x28, 0(x29)                  # Write the Enable Register

# Initializations
# s2 : Moving Led
li s2, 1 
# s3 : current led value, without moving Led
li s3, 0
# s6 : current led value, with moving Led
li s6, 0
# s4 : counter
li s4, 0
# s5 : 15 is the end
li s5, 15 
# s7 : Flag for reverse movement, (1 -> reverse)
li s7, 0
# s8 : 1
li s8, 1

# Initialize leds to zero
li  a0, GPIO_LEDs
li  s6, 1 
jal x1, WriteToLed
# Routine to move leds 
method:
   # Na Valeis break edw gia na deis to kinoumeno led!
   beq   s4, s5, LineEnd # Reached the end
   addi  s4, s4, 1           # Increase Counter
   slli  s2, s2, 1         # Shift left the mooving led
   or    s6, s2, s3      # Write the new value to leds
   jal   x1, WriteToLed 
   j     method
LineEnd: 
   # Na Valeis break kai edw gia na deis to telos ths grammhs!
   or    s3, s3, s2      # Save to neo current led value ston s3
   beq   s5, zero, TheEnd # An anapsane/svisane ola go to  TheEnd
   addi  s5, s5, -1         # Meiwse to telos kata ena
   li    s4, 0          # Initalize counter
   li    s2, 1          # Initialize moving led
   or    s6, s2, s3     # Light up LSB
   jal   x1, WriteToLed
   j     method

TheEnd:
   # Na Valeis break kai edw gia na deis to telos ths grammhs!
   li    t0, 0
   beq   s7, s8, main
   # Initializations
   # s3 : current led value, without moving Led
   li s3, 0
   # s6 : current led value, with moving Led
   li s6, 0
   # s4 : counter
   li s4, 0
   # s5 : 15 is the end
   li s5, 15 
   # s7 : Flag for reverse movement, (1 -> reverse)
   li s7, 1
   # s8 : 1
   li s8, 1
   # s2 : Moving Led
   li s2, 1 
   add s6, s2, zero
   jal x1, WriteToLed

   j  method

# Routine to write s6 to LEDs
WriteToLed:
   add   x2, x1, zero            # save return address
   beq   s7, s8, Reverse         # If flag == 1 then reverse
   sw    s6, 0(a0)               # Write the LEDs 0000
   jal   x1, delay
   add   x1, x2, zero            # write return address
   ret
Reverse: 
   jal   x1, rotateReverse
   not   s6, s6                  # Not
   sw    s6, 0(a0)               # Write the LEDs 0000
   jal   x1, delay
   add   x1, x2, zero            # write return address
   ret

rotateReverse:

#          7 6 5 4 3 2 1 0
#           X   X   X   X 
#          6 7 4 5 2 3 0 1
#           \ X /   \ X /
#            X X     X X
#           / X \   / X \
#          4 5 6 7 0 1 2 3
#           \ \ \ X / / /
#            \ \ X X / /
#             \ X X X /
#              X X X X
#             / X X X \
#            / / X X \ \
#           / / / X \ \ \
#          0 1 2 3 4 5 6 7
   
   # x = ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1); // Swap _<>_
   li    s9, 0x55555555
   and  x30, s6, s9
   slli  x30, x30, 1
   li    s9, 0xAAAAAAAA
   and  x31, s6, s9
   srli  x31, x31, 1
   or    s6, x30, x31
   # x = ((x & 0x33333333) << 2) | ((x & 0xCCCCCCCC) >> 2); // Swap __<>__
   li    s9, 0x33333333
   and   x30, s6, s9
   slli  x30, x30, 2
   li    s9, 0xCCCCCCCC
   and   x31, s6, s9
   srli  x31, x31, 2
   or    s6, x30, x31
   # x = ((x & 0x0F0F0F0F) << 4) | ((x & 0xF0F0F0F0) >> 4); // Swap ____<>____
   li    s9, 0x0F0F0F0F
   and  x30, s6, s9
   slli  x30, x30, 4
   li    s9, 0xF0F0F0F0
   and  x31, s6, s9
   srli  x31, x31, 4
   or    s6, x30, x31
   # x = ((x & 0x00FF00FF) << 8) | ((x & 0xFF00FF00) >> 8); // Swap ...
   li    s9, 0x00FF00FF
   and   x30, s6, s9
   slli  x30, x30, 8
   li    s9,  0xFF00FF00
   and   x31, s6, s9
   srli  x31, x31, 8
   or    s6, x30, x31
   ret

delay: 
   ret

.end

