.data
q:	.double 0.5
b:  .double 1
.globl _function
_function:
	fldl q
	fld1
	fsubp
	fldl b
	fdivp
	ret
