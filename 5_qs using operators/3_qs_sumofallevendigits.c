//WAP to print sum of all even digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ld,sum=0;
    while(n!=0){
        ld=n%10;
        if(ld%2==0) sum=sum+ld;
        n=n/10;
    }
    printf("%d is sum of all even digits",sum);
    
}