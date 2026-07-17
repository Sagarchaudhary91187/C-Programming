//Find a min element in given matrix and print index of element

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
    int i0,j0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(t>m[i][j]){ 
                t=m[i][j];
                i0=i;
                j0=j;
            }
        }
    }
    printf("The min term is %d\n",t);
    printf("The min term index of matrix is (%d,%d)",i0,j0);
    return 0;
}