//                     * * * * * * * * * *
//                     *                 *              [Hollow rectangle]
//                     *                 *
//                     * * * * * * * * * *
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    int x;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){ 
            if(i==1 || i==r || j==1 || j==c)  printf("*"); //using of OR(||)
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}