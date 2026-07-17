//BREAK FUNCION
//rounds in loop called ITERATIONS 'means one by one repeat'
//BREAK; ---> is useed to terminate loop

#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
        if(n==1)    printf("1 is neither prime nor composite number");
        else {
                for(int i=2;i<=n-1;i++){
                        if(n%i==0){   //if n=25, 5 is factor of 25 so we want to stop loop after know this
                                a=1;
                                break;         //stop at first factor
                        } //in this code the statment repeats but we want to stop it on first needable     result
                }       
                if(a==0)
                        printf("the number is prime");
                else
                        printf("the number is composite num");
        }       
        return 0;
}