//Double Poiner in C
/*
A double pointer is a pointer that points to another pointer.
It is used to store the address of a pointer variable.
Example:              */
#include <stdio.h>
int main() {
    int var = 3000;        // actual variable declaration
    int* ptr;             // pointer variable declaration
    int** dptr;           // double pointer variable declaration

    ptr = &var;           // store address of var in pointer variable
    dptr = &ptr;         // store address of ptr in double pointer variable

    printf("Value of var: %d\n", var);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value pointed to by dptr: %d\n\n", **dptr);

    printf("Address of var: %p\n", &var);
    printf("Value stored in ptr (Address of var): %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);
    printf("Value stored in dptr (Address of ptr): %p\n", dptr);
    printf("Address of dptr: %p\n", &dptr);
    return 0;
}

//We can do same thing with triple pointer and so on...