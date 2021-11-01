# Main function

addi	sp,sp,-16 
sw	ra,12(sp) # fort
lui	a4,0x80001 # a4 = GPIO_INOUT
lui	a5,0x10 # a5 = En_Value
addi	a5,a5,-1 # a5 = 0xffff
sw	a5,1032(a4) # a5 -> Mem(0x80001408)
jal	0x90 <do_the_job> # PC-relative jump to do_the_job and save PC on ra
j	0x124 <main+22>  # jump to the "while"
jal	0x90 <do_the_job> # PC-relative jump to do_the_job and save PC on ra
lui	a5,0x80001  
lw	a5,1024(a5) # Read Switches
lui	a4,0x8 
and	a5,a5,a4 # Hold the MSB
lui	a4,0x2  # Bring the already saved <msb> on a4
lw	a4,440(a4) # 0x21b8 <msb> 
beq	a5,a4,0x124 <main+22> # if <msb> == Switches_MSB then jump to while inside main
j	0x122 <main+20> # else jump to do_the_job function
