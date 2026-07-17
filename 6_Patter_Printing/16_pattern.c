// 1
// 3 5                   [Floud's Triangle with Odd num]
// 7 9 11
// 13 15 17
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    int a=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;                 
        }                          
        printf("\n");
    }
    return 0;
}