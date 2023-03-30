section .data
    hello db "Hello, Holberton",10

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, hello
    mov rax, 0
    call printf

    mov eax, 0
    leave
    ret

