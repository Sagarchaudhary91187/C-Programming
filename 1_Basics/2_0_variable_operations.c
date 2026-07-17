#include<stdio.h>
int main(){
    int x;              //creating container
    x= 10;              //assining value in container
    //for extra methods to assign value in variable go to 1_Basics.5
    printf("%d\n",x);   // %d is format specifier use for "int" datatype
    x=20;
    printf("%d\n", x);
    x= x + 5;
    printf("%d\n", x);
    x= x * 2;
    printf("%d\n", x);
        return 0;
}
//format specifiers
// int   --> %d(usuall), %i
// short  --> %d          [is same as integer but store limited digits range b/w -32768 to 32767]
// float --> %f
// ASCII value --> %d   
// char  --> %c   [char is a single character assingn useing single quates]

//Boolean value
// bool  --> true(1),false(0) 
//     eg. int x = 3;           |
//         printf("%d",x=10);   |  Output-->  10
//     eg. int x = 3;           |  
//         printf("%d",x==10);  |  Output-->  0  --> False
//     eg. int x = 3;           |
//         printf("%d",x==3);   |  Output-->  1  --> True
//     eg. int x = 3;           |
//         printf("%d",x>10);   |  Output-->  0  --> False

//  b/c (x==3),(x==10),(x>10),(x<10) are boolean expression