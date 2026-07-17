// A 
// A B          [Alaphabet Trianle]
// A B C 
// A B C D 
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  
            char ch=(char)(j+64);            //a=65 on first iteration
            printf("%c ",ch);     
             
        }
        printf("\n");
    }

    return 0;
}