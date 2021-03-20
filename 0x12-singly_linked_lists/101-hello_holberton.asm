section .data
    mensaje db "Hello, Holberton",10	; 10 is the ASCII code for a new line (LF)

section .mensaje
    global main

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, mensaje
    mov rdx, 17	; defines the length of your string
    syscall

    mov rax, 60
    mov rdi, 0
    syscall