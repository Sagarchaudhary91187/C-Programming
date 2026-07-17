//               *              *
//                   *       *
//                       *                     [Star Cross]
//                   *       *
//               *              *
#include<stdio.h>
int main(){
    int n;
    printf("NOTE: Star Plus is not build for EVEN NUMBERS;\n");
    printf("Enter no of rows/columns: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=1,y=n;
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1)  printf("*");   // using of OR(||)
            else printf(" ");
            x++;y--;
        }
        printf("\n");
    }

    return 0;
}