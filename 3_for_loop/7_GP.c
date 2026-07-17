//PROG: GP 1,2,4,8,16,32,64,128,256............
#include<stdio.h>
int main(){
    int n;
    printf("enter number of terms:  ");
    scanf("%d",&n);
    int a=1; // first term
    for(int i=1;i<=n;i++){
        printf("%d, ",a);
        a=a*2;// ratio
    }
    return 0;
}

//GP eg. 1,2,4,8,16,32,64,128
//  an = a*r*pow(n-1)