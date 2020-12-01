.data

	x: .int 10
	y: .int 13
.global _main 
	_main:
		pushl x
		pushl y
		call _fun
		addl $3*4, %esp 
		xor %eax, %eax
		ret