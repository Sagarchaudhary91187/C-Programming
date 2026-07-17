#include<stdio.h>
#include<math.h>
int main(){
//Volume of Sphere
    float pi = 3.14159265359;
    float r;
    printf("Enter the radius of the sphere:");
    scanf("%f",&r);
    float vol =(4/3)*pi*pow(r,3); 
// to use power use pow(x,y) and import library <math.h> ie. x^y or x*x*x*x y times
    printf("Volume of the Sphere of radius %f is %f\n\n",r,vol);
//Area of circle
    float rc;
    printf("Enter the radius of the circle:");
    scanf("%f",&rc);
    float area = pi*rc*rc;
    printf("Area of Circle of given radius is:%f\n\n",area);
    return 0;
}