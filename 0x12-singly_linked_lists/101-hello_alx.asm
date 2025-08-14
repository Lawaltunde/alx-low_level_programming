; 101-hello_alx.asm
; Build:
;   nasm -f elf64 101-hello_alx.asm
;   gcc -no-pie -std=gnu89 101-hello_alx.o -o hello

global  main
extern  printf

section .rodata
    msg db "Hello, ALX", 10, 0     ; "Hello, ALX\n\0"

section .text
main:
    ; System V AMD64 ABI: stack must be 16-byte aligned before calls.
    ; On entry, RSP % 16 == 8, so subtract 8 to align.
    sub     rsp, 8

    lea     rdi, [rel msg]          ; 1st arg to printf: pointer to string
    xor     eax, eax                ; printf is varargs: set AL=0 (no XMM args)
    call    printf

    add     rsp, 8
    xor     eax, eax                ; return 0
    ret

