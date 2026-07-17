//print n to 1 using recursion
#include<stdio.h>
void dec(int n){                                //void 
    if(n==0) return;  
    printf("%d ",n);
    dec(n-1); 
    return;       
}
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    dec(n);
}