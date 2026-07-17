// 1
// 2 3                   [Floud's Triangle]
// 4 5 6
// 7 8 9 10
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    int a=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+1;                 
        }                          
        printf("\n");
    }
    return 0;
}