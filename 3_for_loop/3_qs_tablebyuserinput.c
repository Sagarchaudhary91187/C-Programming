//main(){
//     printf("table of 19\n");
//     for(int t=1;t<=20;t++){
//         printf("19x%d=%d\n",t,t*19); }
//     }

//PROG: print table by user input

// Method: 1

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);    
    for(int x=a;x<=(a*10);x=x+a){
        printf("%d\n",x);
    }
    return 0;

}

//MEthod: 2 (clean code and result)

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);    
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",a,i,i*a);
    }
    return 0;

}