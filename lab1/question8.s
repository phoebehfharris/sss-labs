.global _start
.section .text
_start:
    leaq cmd(%rip), %rdi
    leaq argv(%rip), %rsi
    xorq %rdx, %rdx
    movq $59, %rax
	syscall
.section .rodata

cmd:  .asciz "/usr/bin/wc"
arg1: .asciz "-w"
arg2: .asciz "/usr/share/dict/words"

.align 8
argv:   .quad cmd, arg1, arg2, 0
