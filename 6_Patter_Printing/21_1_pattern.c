//                     *
//                   * * *            [Star Pyramid]
//                 * * * * *
//               * * * * * * *
//Method 1:
//Using AP. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter common side of isoselius triangle: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){  //Using AP.
            printf("*"); 
            
        }
        printf("\n");
    }
    return 0;
}