//WAP to print the sum of given number and its reverse.

#include<stdio.h>
int main(){
    long n;
    printf("Enter a number: ");
    scanf("%d",&n);
    long ld,sum=0,r=0;
    while(n>0){
        ld=n%10;
        r=ld+r;
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("%d is the reverse of the digit\n",r);
    while(r>0){
        ld = r % 10;
        sum = sum + ld;
        r = r / 10;
    }
    printf("%d is the sum of all digits of number\n",sum);
    return 0;
}