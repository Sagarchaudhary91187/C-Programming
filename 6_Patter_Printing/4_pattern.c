//      *
//      * *     [star traingle with input]
//      * * *
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){       //outer loop signifies no. of lines/rows
        for(int k=1;k<=i;k++){   //inner loop signifies no of columns
        
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}