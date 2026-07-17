//                     *
//                   * * *            [Star Pyramid]
//                 * * * * *
//               * * * * * * * 
//Method 2:
//Using Variable method without AP
#include<stdio.h>
int main(){
    int n;
    printf("Enter common side of isoselius triangle: ");
    scanf("%d",&n);
    int nsp=n;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){  //Using Variable method without AP
            printf("*"); 
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}