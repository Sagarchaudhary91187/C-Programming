#include<stdio.h>
int main(){
    int x=10.20;
    int y=30;
    int z = printf("value of x+y is %d\n ", x+y);
    printf("value of y-x is %d\n ",y-x);
    printf("value of x*y is %d\n ", x*y);
    printf("value of x/y is %d\n ", x/y);
    float a = 1.2;
    float b = 2.3;
    float c = 3.6;
    float d = 4;
    float e = 5;
    printf("print a+b %f\n",a+b);
    printf("print a-d %f\n",a-d);
    printf("print d*e %f\n",d*e);
    printf("print e/a %f\n",e/a);
    printf("print d only %f\n",d);
//printf("%f",3/5);  ------>logical error occur bc 3,5 are integer not floating value bc we expect 0.6
//printf("%d",3.5/5);  ------>error with same reason
    printf("%d\n", 3/2);
    printf("%f\n", 3.5/2);
    printf("%f\n", 3/2.5);
    printf("%d\n", 3.5/2);
}

