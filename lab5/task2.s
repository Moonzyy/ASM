.globl _calc
_calc:	
	fldl 4(%esp)
	fldl 4(%esp)
	fmulp
	fldl 4(%esp)
	faddp
	fldl 12(%esp)
	fsubp
	fchs
