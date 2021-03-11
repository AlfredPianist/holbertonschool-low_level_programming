global main

section .data
	hello:	db 	"Hello Holberton", 10 	; Allocates memory for "Hello Holberton\n"
	len:	equ	$-hello			; Defines the length of "Hello Holberton\n"

section .text
main:
	mov 	rax, 	1	; write (
	mov 	rdi, 	1	; 	1 (to stdout),
	mov 	rsi, 	hello	;	"Hello Holberton\n",
	mov 	rdx, 	len	;	sizeof("Hello Holberton\n")
	syscall			; );
	
   	mov	rax,	60	; exit (
	mov	rdi,	0	;	0
	syscall			; );
