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
    int a=1,b=0; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0) printf("%d",b);  //in this code we can also do
                else printf("%d",a);        //if ((i+j)%2==0) printf("0");
            }                               //else ((i+j)%2!=0) printf("1");
            if(i%2!=0){
                if(j%2==0) printf("%d",a);
                else printf("%d",b); 
            }

        }                          
        printf("\n");
    }
    return 0;
}