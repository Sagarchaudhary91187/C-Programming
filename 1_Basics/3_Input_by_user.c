#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius:");
    scanf("%f",&radius);      
/*-scanf("%f",&radius);  Here in this code we can't give output string code in scanf(""), give like line 4,line 5 combination for clear code
eg, ❌scanf(" Enter the radius: %f",&radius);

 - (&) is compulsary to put before variable where we want to store value
 - NOTE - Meaning of [scanf("%d",&x);] is input the float value at the (location named x).
 - ie, & is used for location 
 - in printf("%d",&x); here output is not x output is location of x 
 */

    float pi = 3.1415 ;
    float area = pi * radius * radius ;
    printf("The area of the circle of radius %f is: %f",radius,area);
    return 0;
}