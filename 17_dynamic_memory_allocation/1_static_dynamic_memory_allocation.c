/*
 //------------------------------ Static vs Dynamic Memory Allocation -------------------------------  //
1. Static Memory Allocation:
    * Memory is allocated at compile time.
    * The size of memory must be known before compilation.
    * Memory is automatically deallocated when the variable goes out of scope.
    * Example: int arr[10];                                   // Static allocation of an array of size 10

2. Dynamic Memory Allocation:
    * Memory is allocated at runtime.
    * The size of memory can be determined during program execution.
    * Memory must be manually deallocated using free() to avoid memory leaks.
    * Example: int *ptr = (int*)malloc(10 * sizeof(int));     // Dynamic allocation of an array of size 10
        



   -------------------------------------- Dynamic Memory Allocation in C ----------------------------------------

    *Memory is allocated using functions like malloc(), calloc(), realloc(), and free().
    *There are two built-in functions in C for dynamic memory allocation:
    1. malloc()
    2. calloc()

    //both allocate memory in contiguous memory locations
    //both allocate memory in heap segment                  //NOTE: stack segment is used for static memory allocation




        1.  *****malloc() function*****------------------------------------
        * malloc() stands for "memory allocation".
        * It allocates a specified number of bytes and returns a pointer to the first byte of the allocated memory block.
        * If the allocation fails, it returns NULL.
        * Note: The memory allocated by malloc() contains garbage values.   (uninitialized memory)
        * Syntax: *ptr = (castType*) malloc(byteSize);
        
        * Example:
            int *ptr = ( int* ) malloc(10 * sizeof(int));            // Memory allocated at runtime
                                or
            int *ptr = ( int* ) malloc(40);                       // Memory allocated at runtime


     
     
        2.  *****calloc() function*****------------------------------------
        * calloc() stands for "contiguous allocation".
        * It also returns a pointer to the first byte of the allocated memory block.
        * If the allocation fails, it returns NULL. 
        * Note: The memory allocated by calloc() is initialized to zero.
        * Syntax: *ptr = (castType*) calloc(n, byteSize);
        * Example:
            int *ptr = ( int* ) calloc(10, sizeof(int));            // Memory allocated at runtime


    -------------------------------------Dynamic Memory Re-allocation in C--------------------------------------
    *realloc() function is used to resize previously allocated memory block
    *the data stored remain intact.Just the alloated memory increased or decreased as per new size
    *Syntax: ptr = realloc(ptr, newSize); 
    *Example:
        int *ptr = (int*) malloc(5 * sizeof(int));             // Allocating memory for 5 integers
        ptr = realloc(ptr, 10 * sizeof(int));                  // Resizing memory to hold 10 integers


    -------------------------------------Freeing Dynamically Allocated Memory--------------------------------------
    *free() function is used to deallocate memory that was previously allocated using malloc(), calloc(), or realloc()
    Pracical Use: To prevent memory leaks and free up resources when they are no longer needed.
    *Syntax: free(pointer to heap address);
    *Example:
        int *ptr = (int*) malloc(10 * sizeof(int));            // Allocating memory
        free(ptr);                                             // Deallocating memory

    NOTE: After memory deallocation, the pointer ptr still holds the address of the freed memory, but accessing it leads to undefined behavior.   
    ****we use NULL to avoid ( Dangling pointer )****
        ptr = NULL;                                            // Avoid dangling pointer

    -------------------------------------Important Note--------------------------------------
    *Note that memory allocated in heap is not freed unless explicitly specified by the developer.
    *Hence if the memory is not deallocated properly, it would result in memory leaks and eat up unnecessary resources of the system.     
    *Hence, with great power to manage memory on our own, comes great responsibility.


--------------------------------------------------------------------------------------------------------------------------



    Why we use Dynamic Memory Allocation?
    Ex: int n;
        printf("Enter number of elements: ");
        scanf("%d", &n);
        int arr[n] ={0};

        //here when we compile  a progrmam the size of array is not known at compile time
        so for this compiler assumes and store some memory for array but if user enters large value for n
        then it may lead to memory overflow or wastage of memory if user enters small value for n
        so to avoid this we use dynamic memory allocation  

    --Advantages of Dynamic Memory Allocation:--
    1. Flexibility: Allows allocation of memory as needed.
    2. Efficient Memory Usage: Allocates memory only when required.
    3. Handling Large Data: Useful for large data structures whose size may not be known at compile time.
   
    */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));         // Dynamic memory allocation using malloc()  
    //ptr = (int *)calloc(n, sizeof(int));        // Dynamic memory allocation using calloc()
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        return 0; // Exit if memory allocation fails
    }
    else
    {
        printf("Memory successfully allocated using malloc().\n");
        // Initializing and displaying the allocated memory
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]); // Taking input
        }
        printf("The elements of the array are: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]); // Displaying values
        }
        printf("\n");
    }
}