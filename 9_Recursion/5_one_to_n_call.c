//for increasing 1 to n                  //IMPORTANT
#include<stdio.h>
void dec(int n){                              
    if(n==0) return;  
    printf("%d ",n);      // for decresing numer
    dec(n-1); 
    return;
}       
void inc(int n){                              
    if(n==0) return;
    inc(n-1); 
    printf("%d ",n);    //for incresing number
    return;       
}

int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    dec(n);
    inc(n);
}