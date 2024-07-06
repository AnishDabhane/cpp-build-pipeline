
main.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%rbp)
   b:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
   f:	b8 00 00 00 00       	mov    $0x0,%eax
  14:	5d                   	pop    %rbp
  15:	c3                   	ret
