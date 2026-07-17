//      1 2 3 4
//      1 2 3 4     [number square with input]
//      1 2 3 4
#include<stdio.h>
int main(){
    int n;
    printf("Enter side of square: \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){       
        for(int j=1;j<=n;j++)  
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}