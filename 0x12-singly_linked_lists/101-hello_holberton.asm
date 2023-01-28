
	extern printf
	global main
main:
	mov		rdi, format
	mov		rax, 0
	call		printf
	mov		rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
