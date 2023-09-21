section .data
    hello db "Hello, Holberton",10,0 ; The string to be printed

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp
    ret

