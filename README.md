# Dereferencing a NULL Pointer in C

This repository demonstrates a common error in C programming: dereferencing a NULL pointer.  Dereferencing a NULL pointer attempts to access memory at address zero, leading to a segmentation fault and program termination.  This example showcases the error and provides a corrected version.

## Bug Description

The `bug.c` file contains code that declares an integer pointer `ptr` and initializes it to `NULL`. It then attempts to dereference `ptr` by assigning the value 10 to the memory location it points to. This action is invalid, resulting in undefined behavior.

## Solution

The `bugSolution.c` file provides a corrected version. Before dereferencing the pointer, it checks whether the pointer is `NULL`. If it is, an appropriate error message is printed; otherwise, the dereference proceeds safely.