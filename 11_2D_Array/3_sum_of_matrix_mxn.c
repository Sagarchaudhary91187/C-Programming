//Find a sum of 2 Matrix of nxm
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter rows of both matrix:");
    scanf("%d",&x);
    printf("Enter columns of both matrix:");
    scanf("%d",&y);
    int m[x][y];
    int n[x][y];

//data enter in matrix  m
    printf("Enter Elements of First metrix\n");
    for(int i=0;i<x;i++){
        printf("-----Enter data of %dth row-----\n",i+1);
        for(int j=0;j<y;j++){
            printf("Enter element of %dth colume",j+1);
            scanf("%d",&m[i][j]);
        }
    }

//data enter in matrix  n
    printf("Enter Elements of Second metrix\n");
    for(int i=0;i<x;i++){
        printf("-----Enter data of %dth row-----\n",i+1);
        for(int j=0;j<y;j++){
            printf("Enter Element of %dth colume",j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("First Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }
    printf("Additon of Both Matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d  ",m[i][j]+n[i][j]);
        }
        printf("\n");
    }
    return 0;
}