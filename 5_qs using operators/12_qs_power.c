//The numbers are entered through the keyboard. Write a to find the value of one number raised to the power of another.

//Method 1:

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    printf("%d Raise to the power: ",a);
    scanf("%d",&b);
    int t=a;
    for(int i=1;i<b;i++){
    int n=a*t;
    a=n;}   
    printf("%d",a);
    return 0;
}
//ABOVE CODE IS TIPYCAL AND HAVE LIMITATIONS 
//2**0=1 BUT theere is 2**0=2
//new code below

//Method 2:

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter base: ");
//     scanf("%d",&a);
//     printf(" Raise power: ");
//     scanf("%d",&b);
//     int power=1;
//     for(int i=1;i<=b;i++){
//         power=power*a;
//     }   
//     printf("%d",power);
//     return 0;
// }