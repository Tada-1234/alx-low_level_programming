section .data
    message db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8     ; Align stack on 16-byte boundary

    mov rdi, format
    mov rsi, message
    xor eax, eax   ; Clear upper bits of rax
    call printf

    add rsp, 8     ; Restore stack alignment
    mov eax, 0x60  ; System call number for exit
    xor edi, edi   ; Exit status 0
    syscall
