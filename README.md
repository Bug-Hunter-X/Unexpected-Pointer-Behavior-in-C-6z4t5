# Unexpected Pointer Behavior in C

This repository demonstrates a common source of confusion for beginners in C programming involving pointers. The code showcases how changing where a pointer points does not change values previously accessed through the pointer. 

## Bug Description
The provided C code snippet manipulates integer variables using pointers. While seemingly straightforward, it highlights a subtle point: altering the pointer's target doesn't retroactively change the value of previously pointed-to variables.

## Code Explanation
The `bug.c` file contains the core C code exhibiting the unexpected behavior.  The `bugSolution.c` file demonstrates how this is intended behavior, and shows the difference between pointing at a variable and modifying the value the pointer is holding.

## How to run
Save the code as two `.c` files (`bug.c`, `bugSolution.c`). Compile and run them using a C compiler (like GCC):

```bash
gcc bug.c -o bug
./bug
gcc bugSolution.c -o bugSolution
./bugSolution
```