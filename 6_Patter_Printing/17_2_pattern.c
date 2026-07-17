// 0
// 1 0
// 0 1 0                [0,1 Triangle]
// 1 0 1 0
// 0 1 0 1 0 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    int a; 
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=0;           // in every nested loop starting condition
        else a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            if (a==0) a=1;        //Here, we switch the value of a in ested loop only
            else a=0;
        }                          
        printf("\n");
    }
    return 0;
}