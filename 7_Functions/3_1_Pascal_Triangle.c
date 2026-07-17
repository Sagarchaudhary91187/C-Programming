//WAP to print Pascal Triangle optimized
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter num of lines: ");
    scanf("%d",&n);  
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            printf(" ");
        }
        int first=1;
        for(int j=0;j<=i;j++){
            printf(" %d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    } 
   return 0;
}