.data 
i: .int 2
.globl _function
_function:
	fld1
	fldl 4(%esp)
	fabs
	fsub
	jnbe label1
	fld1
	fld1
	fadd
	fld1
	fadd
	fldl 4(%esp)
	fmul
	fld1
	fadd
	ret
label1: 
	fld1
	fld1
	fadd
	fldl 4(%esp)
	fdiv
	ret


	
	

	
	