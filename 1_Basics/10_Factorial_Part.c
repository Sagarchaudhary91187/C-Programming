#include<stdio.h>
int main(){
//take float input and print the fractional part of the real number
    float a,c;
    printf("Enter a decimal number: ");
    scanf("%f",&a);
    int b;
    b=a;
    c=a-b;
    printf("The fractional part is : %f",c); 
    return 0;
}