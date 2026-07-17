//           *
//           *
//       * * * * *             [Star Plus]
//           * 
//           *  
#include<stdio.h>
int main(){
    int n;
    printf("NOTE: Star Plus is not build for EVEN NUMBERS;\n");
    printf("Enter no of Stars.: ");
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            if(i==(n/2)+1 || j==(n/2)+1 )  printf("*"); //using of OR(||)
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}