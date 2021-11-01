.globl main

.equ N, 10

.data 
A: .word 0,1,2,7,-8,4,5,-12,11,-2
B: .word 0,1,2,7,-8,4,5,12,-11,-2

.bss 

C: .space 4*N

.text 

main:
    la t0, A    # beginning address of A array
    la t1, B    # beginning address of B array
    la t4, C    # beginning address of C array
    add t1, t1, 4*(N-1) # t1 -> address of last element of B array 
                        # (word is 4 bytes, byte addressed memory)  
    li t2, 0    # t2 is our counter (i)
    li t5, N    # t5 holds N
looper:
    lw t3, 0(t0) # load ith element of A array
    lw a0, 0(t1) # load (N-1-i)th element of B array
    add t3, t3, a0 # t3 = A[i] + B[N-1-i]
    sw t3, 0(t4)   # C[i] = t3
    addi t0, t0, 4  # increase by 4 to get address of next word of A
    addi t1, t1, -4 # decrease by 4 to get address of previous word of B
    addi t2, t2, 1  # increase counter by one (i++)
    addi t4, t4, 4  # increase by 4 to get address of next word of C
    bgt t5, t2, looper  # branch to looper if i < N (i = 0,1,2...9)

.end
