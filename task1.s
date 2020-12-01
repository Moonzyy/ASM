.globl _tass
	_tass:
		mov 4(%esp), %eax
		mov $2, %ecx
		sub %edx,%edx
		div %ecx;
		inc %eax;
		ret