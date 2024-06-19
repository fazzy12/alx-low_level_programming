section .data
hello db "Hello, Holberton", 0

section .text
global _start

extern printf

_start:
    ; Call printf with the address of the hello string
    mov rdi, hello
    call printf

    ; Exit the program
    mov rax, 60        ; sys_exit system call
    xor rdi, rdi       ; exit code 0
    syscall
