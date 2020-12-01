.data
	msg:
	.string "y = %d\n"
.globl _main
	_main:
	    mov $13, %eax
	    mov $2, %ecx
	    sub %edx,%edx
	    div %ecx;
	    inc %eax;
	    push %eax
	    push $msg
	    call _printf
	    add $8, %esp
	    mov $0, %eax
	    ret