// wap to save the transpose of the given matrix in the same matrix of nxn.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter rows and clms of matrix:");
    scanf("%d",&x);
    printf("Enter Elements of metrix\n");
    int m[x][x];
    printf("-----Enter data of matrix-----");
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            if(i<x && j<y){
               int t=m[i][j];
               m[i][j]=m[j][i];
               m[j][i]=t;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}