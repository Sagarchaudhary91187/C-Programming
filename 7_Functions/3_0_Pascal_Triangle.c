//WAP to print Pascal Triangle using functions
#include<stdio.h>
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int com(int n,int r){
    int com=fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    printf("Enter num of lines: ");
    scanf("%d",&n);  
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf(" %d ",com(i,j));
        }
    printf("\n");
   
    }
              
   return 0;
}