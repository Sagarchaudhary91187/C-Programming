#include<stdio.h>
int main() {
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);  
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Addition of both numers %d + %d = %d ",a,b,a+b);
/*  or we can write in new formate
    eg.
    printf("Enter numbers A,B:");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
*/
    return 0;

}