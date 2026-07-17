//print the sum from 1 to n.
#include<stdio.h>
void sum(int n,int i){
    if(n==0){
        printf("%d",i);
        return;
    }
    sum(n-1,i+n);
    return;
    
}
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    sum(n,0);
}