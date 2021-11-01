lui	a5,0x80001 
lw	a2,1024(a5) # Read Switches value and write it to a2
lui	a5,0x8 
and	a5,a5,a2 # Logical AND
lui	a4,0x2
sw	a5,440(a4) # Write the Switches-MSB to <msb>
li	a3,0 
li	a1,0
j	0xe2 <do_the_job+82>
addi	a5,a5,1
li	a4,999
blt	a4,a5,0xbe <do_the_job+46> 
li	a4,998
bge	a4,a5,0xa8 <do_the_job+24>
addi	a1,a1,1
j	0xa8 <do_the_job+24>
lui	a5,0x80001
sw	zero,1028(a5) # 0x80001404
li	a5,0
j	0xcc <do_the_job+60>
addi	a5,a5,1
li	a4,999
blt	a4,a5,0xe0 <do_the_job+80>
li	a4,998
bge	a4,a5,0xca <do_the_job+58>
addi	a1,a1,1
j	0xca <do_the_job+58>
addi	a3,a3,1
li	a5,15
blt	a5,a3,0x102 <do_the_job+114>
sra	a5,a2,a3
andi	a5,a5,1
beqz	a5,0xe0 <do_the_job+80>
lui	a5,0x10
addi	a5,a5,-1
xor	a5,a5,a2
lui	a4,0x80001
sw	a5,1028(a4) # 0x80001404
li	a5,0
j	0xaa <do_the_job+26>
srli	a5,a1,0x1f
add	a1,a1,a5
srai	a0,a1,0x1
ret
