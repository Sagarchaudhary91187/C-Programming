//WAP to print the factorial of 'n' terms.

#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int product =1;
    for(int i=1;i<=n;i++){
        product = product * i;
        printf("The factorial of %d is: %d\n",i,product);
    }
     
    return 0;
}

//Note :  0! = 1 , 1! = 1