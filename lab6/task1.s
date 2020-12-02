.globl _function
_function:
	mov 4(%esp), %eax
	and $1, %eax
	je label1
	jne label2
label1:
	mov 4(%esp), %eax
	shr $1, %eax 
	ret
label2:
	mov 4(%esp), %eax
	mov $3, %ebx
	mul %ebx
	inc %eax
	ret

