////print good morning using recursion


#include<stdio.h>
void greating(int n){
    if(n==0) return;
    printf("Good morning\n");
    return greating(n-1);      
}
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    greating(n);
}