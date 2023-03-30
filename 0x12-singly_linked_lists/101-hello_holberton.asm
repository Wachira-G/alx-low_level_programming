section .data
    hello db "Hello, Holberton",10
    len equ $-hello

section .text
    global _start

    _start:
        ; print "Hello, Holberton" using printf
        mov eax, 4          ; system call for write
        mov ebx, 1          ; file descriptor for stdout
        mov ecx, hello      ; address of string to write
        mov edx, len        ; length of string
        int 0x80            ; call kernel

        ; exit program
        mov eax, 1          ; system call for exit
        xor ebx, ebx        ; exit status code
        int 0x80            ; call kernel

