1. 
  `syscall` is an instruction that transfers control to the kernel. 
  `mov` is an instruction that moves data between registers and between memory
  `rax` is the syscall number, the others are arguments
  These are registers. The calling convention for syscalls demands that arguments be found in the registers. 
2. 
  It's a disassembly of the assembled machine code
3. 
  32-bit syscalls use interrupts instead of a specialised syscall instruction
4. 
  * x64: First six integer or pointer arguments in registers up to R9, first eight float arguments in XMM0-7, remaining args in stack. Return values 0-64 bits in rax, 64-128 bits in RAX + RDX, FP return vals in XMM0-1, YMM+ZMM for wider return vals. Obviously more to this. 
  * x86: All arguments put on the stack, return values put in EAX for ints, ST0 for floats. EAX, ECX EDX caller saved, the others callee saved
5. 
  1. 64
  2. rbp is the base of the stack frame, rsp starts at rbp and is subtracted to add local variables etc. 
  3. Just the two halfs of the string
  4. 64
  5. 35?
  6. rbp - 16
  7. ?
  8. COMSM0049ISFUN
     ...ha ha, gretch
6. Sets a bunch of registers to zero in different ways
7. Fibonacci
