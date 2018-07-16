	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_ft_putnbr
	.p2align	4, 0x90
_ft_putnbr:                             ## @ft_putnbr
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movslq	-4(%rbp), %rax
	cmpq	$-2147483648, %rax      ## imm = 0x80000000
	jne	LBB0_2
## BB#1:
	movl	$4080218932, %edi       ## imm = 0xF3333334
	callq	_ft_putnbr
	movl	$56, %edi
	callq	_ft_putchar
	jmp	LBB0_9
LBB0_2:
	cmpl	$0, -4(%rbp)
	jge	LBB0_4
## BB#3:
	movl	$45, %edi
	callq	_ft_putchar
	xorl	%edi, %edi
	subl	-4(%rbp), %edi
	callq	_ft_putnbr
	jmp	LBB0_8
LBB0_4:
	cmpl	$9, -4(%rbp)
	jle	LBB0_6
## BB#5:
	movl	$10, %eax
	movl	-4(%rbp), %ecx
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movl	%ecx, %eax
	cltd
	movl	-8(%rbp), %ecx          ## 4-byte Reload
	idivl	%ecx
	movl	%eax, %edi
	callq	_ft_putnbr
	movl	$10, %eax
	movl	-4(%rbp), %ecx
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	cltd
	movl	-12(%rbp), %ecx         ## 4-byte Reload
	idivl	%ecx
	movl	%edx, %edi
	callq	_ft_putnbr
	jmp	LBB0_7
LBB0_6:
	movl	-4(%rbp), %eax
	addl	$48, %eax
	movb	%al, %cl
	movsbl	%cl, %edi
	callq	_ft_putchar
LBB0_7:
	jmp	LBB0_8
LBB0_8:
	jmp	LBB0_9
LBB0_9:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
