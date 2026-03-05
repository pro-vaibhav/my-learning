	.file	"g-c.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Enter the marks obtained in maths: \0"
LC1:
	.ascii "%d\0"
	.align 4
LC2:
	.ascii "Enter the marks obtained in science: \0"
	.align 4
LC3:
	.ascii "Enter the marks abtained in english: \0"
	.align 4
LC4:
	.ascii "Enter the marks obtained in sst: \0"
	.align 4
LC5:
	.ascii "Enter the marks obtained in computer: \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$48, %esp
	.cfi_offset 3, -12
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_printf
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC3, (%esp)
	call	_printf
	movl	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC4, (%esp)
	call	_printf
	movl	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC5, (%esp)
	call	_printf
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %edx
	movl	32(%esp), %eax
	addl	%eax, %edx
	movl	44(%esp), %eax
	addl	%eax, %edx
	movl	40(%esp), %eax
	leal	(%edx,%eax), %ebx
	movl	36(%esp), %ecx
	movl	$274877907, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$5, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$100, %eax, %eax
	addl	%ebx, %eax
	movl	%eax, 24(%esp)
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
