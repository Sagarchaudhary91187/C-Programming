//Take integer input and print the absolute value of that integer.
//Absolute Value value of a number is it's positive.
#include<stdio.h>
int main(){
    float n  ;
    printf("Enter the number : ");
    scanf("%f",&n);
    if (n<0){     // n is negative
        float c = n*(-1);     //or c = n - n - n = +ve number
        printf("the absolute value of %f is :%f",n,c);
    }
    else{
        printf("the absolute value of %f is :%f",n,n);
    }
    return 0;
}