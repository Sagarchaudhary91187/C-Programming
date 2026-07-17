// wap to print the transpose of the given matrix
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
    
    printf("Transpose of Matrix is:\n");
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            printf("%d  ",m[j][i]);
        }
        printf("\n");
    }
    return 0;
}