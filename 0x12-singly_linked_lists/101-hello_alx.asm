; section .note.GNU-stack noalloc noexec nowrite progbits

global main
extern printf

section .data
	msg db "Hello, ALX", 10, 0	; 10 = \n, 0 = \0

section .text
main:
	push rbp
	mov rbp, rsp

	lea rdi, [msg]
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret
