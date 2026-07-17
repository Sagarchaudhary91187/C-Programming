//WAP to print fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=0;  
    printf("%d ",a);
    printf("%d ",b);
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
      printf("%d ",sum);
    }   
     
    return 0;
}

//FIBONACCY series:
//1, 1, 2 ,3 ,5 ,8 ,13, 21, 34, 55, 89.......
// ie. adding last two terms is third term ie. [a3 + a4 = a5], [a4 + a5 = a6]