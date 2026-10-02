# Hard Question 1 - Answer

This in GCC 4.x was handled by expand_builtin_printf, and has a lot of conditions but mainly not needing the return value and being able to evaluate it at comptime. 

Nowadays it's in Gimple

