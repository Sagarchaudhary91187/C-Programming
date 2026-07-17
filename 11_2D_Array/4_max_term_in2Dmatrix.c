//Find a max element in given matrix
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
    printf("First Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }

    int t=m[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(t<m[i][j]) t=m[i][j];
        }
    }
    printf("the max term is %d",t);
    return 0;
}