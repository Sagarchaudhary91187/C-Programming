//Find a sum of 2 Matrix of 2x2
#include<stdio.h>
int main(){
    int m[2][2];
    int n[2][2];
    printf("Enter elements of First metrix\n");
    for(int i=0;i<2;i++){
        printf("-----Enter data of %dth row-----\n",i+1);
        for(int j=0;j<2;j++){
            printf("Enter element of %dth colume",j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("Enter elements of Second metrix\n");
    for(int i=0;i<2;i++){
        printf("-----Enter data of %dth row-----\n",i+1);
        for(int j=0;j<2;j++){
            printf("Enter element of %dth colume",j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("First Matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }
    printf("Additon of Both Matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",m[i][j]+n[i][j]);
        }
        printf("\n");
    }
    return 0;
}