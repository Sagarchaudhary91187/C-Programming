//Prog: take 3 positive integer input and print gretest of them (if all three are distict)

//Method 1

#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter first num.: ");
    scanf("%d",&n1);
    printf("Enter second num.: ");
    scanf("%d",&n2);
    printf("Enter third num.: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3){      
        printf("%d is largest ",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d is largest ",n2);
    }
    else if(n3>n2 && n3>n1){
        printf("%d is largest ",n3);
    }
    return 0;
}

//Method 2         (NESTED LIST)

#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter first num.: ");
    scanf("%d",&n1);
    printf("Enter second num.: ");
    scanf("%d",&n2);
    printf("Enter third num.: ");
    scanf("%d",&n3);
    if(n1>n2){    //n2 out
        if(n1>n3)            
        printf("%d is greatest:",n1);
        else
        printf("%d is greatest:",n3);
    }
//if there is only one line statment in (if or else) then it is not compalsury to use {}
    else{
        if(n2>n3)
        printf("%d is greatest:",n2);
        else
        printf("%d is greatest:",n3);
    }
    return 0;
}