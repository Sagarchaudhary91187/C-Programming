//      * * * * *
//      * * * * *     [rectangle with input]
//      * * * * * 
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    for(int i=1;i<=r;i++){       //outer loop signifies no. of lines/rows
        for(int j=1;j<=c;j++){   //inner loop signifies no of columns
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//For any patterns you want to observe :
// * no of lines.
// * in each line what is happening.