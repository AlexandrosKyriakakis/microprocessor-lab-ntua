#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

.globl main
main:

li x28, 0xFFFF
li x29, GPIO_INOUT
sw x28, 0(x29)                  # Write the Enable Register

# Initialize leds to zero
li a0, GPIO_LEDs
li t4, 0 
j  WriteToLed
# Initializations
# t0 : Moving Led
li t0, 1 
sw t0, 0(a0)            # Write the LEDs
j  delay
# t1 : current led value, without moving Led
li t1, 0
# t4 : current led value, with moving Led
li t4, 0
# t2 : counter
li t2, 0
# t3 : 31 is the end
li t3, 31 
# t5 : Flag for reverse movement, (1 -> reverse)
li t5, 0
# t6 : 1
li t6, 1
# Routine to move leds 
method:
   beq   t2, t3, LineEnd # Reached the end
   addi  t2, 1           # Increase Counter
   slli  t0,t0,1         # Shift left the mooving led
   or    t4, t0, t1      # Write the new value to leds
   sw    t4, 0(a0)       # Write the LEDs
   j     delay 
   j     method
LineEnd: 
   or    t1, t1, t0      # Save to neo current led value ston t1
   beq   t1, x28, TheEnd # An anapsane/svisane ola go to  TheEnd
   addi  t3, -1         # Meiwse to telos kata ena
   li    t2, 0          # Initalize counter
   li    t0, 1          # Initialize moving led
   j     method

TheEnd:
   beq   t5, t6, main
   # Initializations
   # t0 : Moving Led
   li t0, 1 
   sw t0, 0(a0)            # Write the LEDs
   j  delay
   # t1 : current led value, without moving Led
   li t1, 0
   # t4 : current led value, with moving Led
   li t4, 0
   # t2 : counter
   li t2, 0
   # t3 : 31 is the end
   li t3, 31 
   # t5 : Flag for reverse movement, (1 -> reverse)
   li t5, 1
   # t6 : 1
   li t6, 1
   j  method
# Thn deyterh fora apla vazw ena not kai peristrefv kyklika 31 fores se kathe output


# Routine to write t4 to LEDs
WriteToLed:
   beq   t5, t6, Reverse         # If flag == 1 then reverse
   sw    t4, 0(a0)               # Write the LEDs 0000
   j     delay
   ret
Reverse: 
   j     rotateRight
   xor   t4, t4, x28             # Not
   sw    t4, 0(a0)               # Write the LEDs 0000
   j     delay
   ret

rotateRight:
   srli  x30, t4, 1
   li    x31, 0x7FFE # 011...110
   and   x30, x30, x31
   addi  x31, t4, zero # FIXME
   andi  x31, 1
   slli  x31, 31
   or    x30, x31, x30
   addi  x31, t4, zero
   andi  x31, 0x8000  # 10000
   srli  x31, 31
   or    x30, x31, x30
   addi  t4, x30, zero
   ret
delay: 
   ret

.end

