#include<stdio.h>
#include<math.h>
int main(){
//Calculating simple intrest
    float profit,rate,time,si;       //also a way to assing variable
    printf("Enter principle obtained:");
    scanf("%f",&profit);
    printf("Enter the rate of intrest:");
    scanf("%f",&rate);
    printf("Enter total time in year:");
    scanf("%f",&time);
    //float profit=999,rate=5.6,time=365; is also a way to assing variable
    si=profit*rate*time/100;
    printf("Simple intrest in %f years if principle is %f at the rate of %f is: %f\n",time,profit,rate,si);
    return 0;
}