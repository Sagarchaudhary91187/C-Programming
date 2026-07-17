// 1
// 1 3
// 1 3 5      [Odd number triangle]                Imp.
// 1 3 5 7
// 1 3 5 7 9
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of triangle: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;  //assigning a variable in for loop(to make sure [a] start from 1 in every iteration)
        for(int j=1;j<=i;j++){       // j<=i is use to print 1,2,3,4 
            printf("%d ",a);
            a=a+2;                  // assign for odd number starting from 1. ie, a=1;       
        }                           // focus on why using [a] variable after print 
        printf("\n");
    }
   //using nested loop--> make column from first loop and row by nested loop

//NOTE//we can not make this qs by AP method.
    return 0;
}