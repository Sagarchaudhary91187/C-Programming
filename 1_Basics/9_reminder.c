//Take two integer inputs,a and b:a>b, and find the rimender when a is divided by b and print the remainder
#include<stdio.h>
int main(){
    int a,b;  //a>b
    printf("Enter 1st number:");                
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);

    int q = a / b ;
    int r = a - ( b * q ) ;  //divisor*quitent + reminder =divident
    printf("The reminder when %d is divided by %d is: %d",a,b,r);
    return 0;
}

// or we can use modulus operator(%) to find reminder directly

// int c= a % b ;                         
// printf("the reminder when %d is divided by %d is: %d",a,b,c); 