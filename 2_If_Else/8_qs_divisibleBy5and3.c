// Prog 1:
// Take positive num int input and tell if it is divisible by 5 and by 3.

#include<stdio.h>
int main(){
    int n;
    printf("Enter any num.: ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){                       // if(n%15==0)
        printf("%d is divisible by 5 and 3",n);
    }
    else{
        printf("%d is not divisible by 5 and 3",n);
    }
    return 0;
}

// Prog 2: take positive num int input and tell if it is divisible by 5 or by 3.

#include<stdio.h>
int main(){
    int n;
    printf("Enter any num.: ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){                       // if(n%15==0)
        printf("%d divisible by 5 or 3\n",n);
    }
    
    else{
        printf("%d is not divisible by 5 or 3",n);
    }
    return 0;
}