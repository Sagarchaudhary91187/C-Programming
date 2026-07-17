//wap to print the row number having the maximum sum of element in the given 2D matrix.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter rows of matrix:");
    scanf("%d",&x);
    printf("Enter columns of matrix:");
    scanf("%d",&y);
    int m[x][y];
    printf("Enter Elements of metrix\n");
    for(int i=0;i<x;i++){
        printf("-----Enter data of %dth row-----\n",i+1);
        for(int j=0;j<y;j++){
            printf("Enter element of %dth colume",j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }

    int t=m[0][0],i0;
    for(int i=0;i<x;i++){
        int s=0;
        for(int j=0;j<y;j++){
            s=s+m[i][j];
            if(t<s){ 
                t=s;
                i0=i;
            }
        }
    }
    printf("The max row is %d\n",t);
    printf("The max row index of matrix is %d",i0);

    return 0;
}