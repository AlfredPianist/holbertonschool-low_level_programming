section .data
	hello:	db 	"Hello, Holberton", 	0 	; Allocates memory for "Hello, Holberton"
	format:	db	"%s",			10	; Allocates memory for the format "%s"

section .text
	extern	printf		; declare printf
	global main

main:
	mov 	rsi, 	hello	; "Hello, Holberton"
	mov	rdi,	format	; "%s" format
	mov	rax, 	0	; No variable arguments
	call	printf

   	mov	rbx,	0	; return (
	mov	rax,	1	;	0
	syscall			; );
