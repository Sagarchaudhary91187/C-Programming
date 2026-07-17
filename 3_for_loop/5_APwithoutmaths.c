//PROG: print AP=1,3,5,7,9.... upto n terms
#include<stdio.h>
int main(){
    int a,n,d;
    printf("Enter first terms: ");
    scanf("%d",&a); 
    printf("Enter num of terms you want to print: ");
    scanf("%d",&n);
    printf("enter common difference: ");
    scanf("%d",&d);
    for(int i=1;i<=n;i++){
        printf("%d, ",a);
        a=a+d;
    } 
    return 0;
}