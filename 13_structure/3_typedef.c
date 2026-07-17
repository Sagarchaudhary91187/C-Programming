/*----------------typedef-------------------
typedef is a keyword in C that allows you to create an alias or 
a new name for an existing data type.

This can be useful for improving code readability, simplifying complex 
data types, and enhancing portability across different platforms. 

*/

#include<stdio.h>
typedef float decimal;

int main(){
    decimal x = 1.5;
    float y = 2.5;    //both are same and can be used interchangeably



// We can use it in structure also best place to use typedef is when we have
// to use structure multiple times in program.



    typedef struct pokemon{ 
        int power;
        int damage;
        float attack;
        char type[50];
    } pokemon;                     //pokemon is now an alias for struct pokemon

    pokemon pikachu;             //pikachu is variable of type struct pokemon
    struct pokemon hikachu;  //hikachu is variable of type struct pokemon


    //we can use typedef for pointer also


    int a,b;  //normal int variables
    int* c,d;  //here only c is pointer to int but d is normal int variable

    //to solve this problem we can declare pointer like this or we have to use typedef 
    int *e, *f; //here both e and f are pointer to int

    typedef int* pointer;
    //Now
    pointer p,q; //here both p and q are pointer to int
    
    printf("%p\n",p);
    printf("%p\n",q);
}