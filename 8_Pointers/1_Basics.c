//Pointers in C
/*
Pointers are variables that store the memory address of another variable.
They are used for dynamic memory allocation, arrays, and functions.

Example:              */
#include <stdio.h>
int main() {
    int var = 20;   // actual variable declaration
    int *ptr;      // pointer variable declaration
//  int* ptr = &var;  // can also be written like this

    ptr = &var;    // store address of var in pointer variable

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value stored in ptr (Address of var): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);        
//changeing value using pointer
    *ptr = 30;
    printf("New value of var: %d\n", var);
    return 0;
}
