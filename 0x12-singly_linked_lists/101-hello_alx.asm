section .note.GNU-stack noalloc noexec nowrite progbits

section .data
	msg db "Hello, ALX", 10, 0	; 10 = \n, 0 = \0

section .text
extern printf	; declaring an external symbol
global main	; C entry point (GCC)

main:
	mov rdi, msg	; 1st arg for printf - format string
	xor rax, rax	; clear additional args - no specifiers
	call printf	; finally invoke printf
	ret
