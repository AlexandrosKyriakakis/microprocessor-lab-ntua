0x00000090: b7 17 00 80     	lui	a5,0x80001
0x00000094: 03 a6 07 40     	lw	a2,1024(a5) # Read Switches value and write it to a2
0x00000098: a1 67           	lui	a5,0x8
0x0000009a: f1 8f           	and	a5,a5,a2 # Logical AND
0x0000009c: 09 67           	lui	a4,0x2
0x0000009e: 23 2c f7 1a     	sw	a5,440(a4)  # Write the Switches-MSB to <msb>
0x000000a2: 81 46           	li	a3,0  # a3 =:= i
0x000000a4: 81 45           	li	a1,0  # a1 =:= number of aces
0x000000a6: 35 a8           	j	0xe2 <do_the_job+82> # jump to (line 29)
0x000000a8: 85 07           	addi	a5,a5,1 # Move on to the 1000 loops
0x000000aa: 13 07 70 3e     	li	a4,999 # Delay "for loop"
0x000000ae: 63 48 f7 00     	blt	a4,a5,0xbe <do_the_job+46> # if 999 < j go to line 17
0x000000b2: 13 07 60 3e     	li	a4,998
0x000000b6: e3 59 f7 fe     	bge	a4,a5,0xa8 <do_the_job+24>
0x000000ba: 85 05           	addi	a1,a1,1
0x000000bc: f5 b7           	j	0xa8 <do_the_job+24> # go to line 10
0x000000be: b7 17 00 80     	lui	a5,0x80001 # switch off the leds
0x000000c2: 23 a2 07 40     	sw	zero,1028(a5) # 0x80001404
0x000000c6: 81 47           	li	a5,0 # init a5
0x000000c8: 11 a0           	j	0xcc <do_the_job+60> # go to line 22
0x000000ca: 85 07           	addi	a5,a5,1
0x000000cc: 13 07 70 3e     	li	a4,999 # Next delay
0x000000d0: 63 48 f7 00     	blt	a4,a5,0xe0 <do_the_job+80> # if 999 < j go to 28
0x000000d4: 13 07 60 3e     	li	a4,998
0x000000d8: e3 59 f7 fe     	bge	a4,a5,0xca <do_the_job+58>
0x000000dc: 85 05           	addi	a1,a1,1
0x000000de: f5 b7           	j	0xca <do_the_job+58>
0x000000e0: 85 06           	addi	a3,a3,1 # i++ move on to the next bit 
0x000000e2: bd 47           	li	a5,15 # max(i) =:= a5 = 15
0x000000e4: 63 cf d7 00     	blt	a5,a3,0x102 <do_the_job+114> # if i < 15 go to 0x102 (line 41)
0x000000e8: b3 57 d6 40     	sra	a5,a2,a3 # a5 = switches_value >> i
0x000000ec: 85 8b           	andi	a5,a5,1 # a5 = switches_value >> i) & 0x1
0x000000ee: ed db           	beqz	a5,0xe0 <do_the_job+80> # if a5 == 0 go to (line 28)
0x000000f0: c1 67           	lui	a5,0x10 # else grapse thn arnhsh sta led
0x000000f2: fd 17           	addi	a5,a5,-1 # a5 == 0xffff
0x000000f4: b1 8f           	xor	a5,a5,a2 # a5 = switches_value ^ 0xffff
0x000000f6: 37 17 00 80     	lui	a4,0x80001 
0x000000fa: 23 22 f7 40     	sw	a5,1028(a4) # Mem(Leds) <- a5
0x000000fe: 81 47           	li	a5,0 # a5 = 0
0x00000100: 6d b7           	j	0xaa <do_the_job+26> # jump to line 11
0x00000102: 93 d7 f5 01     	srli	a5,a1,0x1f # Right shift: a5 = a1 >> 31 
0x00000106: be 95           	add	a1,a1,a5 # a1 += a5
0x00000108: 13 d5 15 40     	srai	a0,a1,0x1 # arithmetic shift right a0 = a1 >> 1
0x0000010c: 82 80           	ret
