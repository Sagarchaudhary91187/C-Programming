//PROG: GP-100,50,25......n terms
#include<stdio.h>
int main(){
    int n=10;       //no of terms
    float a=100;     //first term
    for(int i=1;i<=n;i++){
        printf("%f, ",a);
        a=a/2;
    }
    return 0;
}
