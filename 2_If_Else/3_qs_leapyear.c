//any year is input through the keyboard.Write a program to determine whether the year is leap year or not  (considering leap year occurs after every 4 years)
#include<stdio.h>
int main(){
    int a;
    printf("Enter any year : ");
    scanf("%d",&a);
    if(a%4==0){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
    return 0;
}