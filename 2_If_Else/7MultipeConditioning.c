//------------------Multiple Conditions Using && and ||
//      &&---->(and) ie. both statment should be TRUE
//      ||----> (or) if. any of statment should be TRUE
//priority of '&&' > '||'            ##hierachy


//Question
//take positive num int input and tell if it is a 3 digit number or not.

//WAP o check the digit is of three digit or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter any num.: ");
    scanf("%d",&n);
    if(n>99 && n<1000){   //n is should be greater than 99 and smaller than 1000 is compalsary.
        printf("%d is 3 digit number",n);
    }
    else{
        printf("%d is not 3 digit num",n);
    }
    return 0;
}

    