//WAP to print nth fibonacci number
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;  
    for(int i=1;i<=(n-2);i++){
        sum=a+b;
        a=b;
        b=sum;
      
    }   printf("The %dth fibonacci term is %d ",n,sum);
     
    return 0;
}

//FIBONACCY series:
//1, 1, 2 ,3 ,5 ,8 ,13, 21, 34, 55, 89.......
// ie. adding last two terms is third term ie. [a3 + a4 = a5], [a4 + a5 = a6]