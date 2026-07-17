
//print sum of series 1+2+3+4+5----n terns
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=i+sum;
    }
    printf("%d is the sum of series 1+2+3+4+.....%d",sum,n);
    return 0;
}