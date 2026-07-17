//WAP to check whether the area is greter than perimeter or not
#include<stdio.h>
int main(){
    float l,b;
    printf("Enter the length of rectangle: \n");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: \n");
    scanf("%f",&b);
    float area = l*b;
    float per = 2*(l+b);
    printf("Area = %f\n",area);
    printf("Perimeter = %f\n",per);
    if(area>per){
        printf("Area is Greater than Perimeter\n");
    }
    else if(area == per){
        printf("Area is Equal to Perimeter");
    }
    else{
        printf("Area is Smaller than Perimeter");
    }
    return 0;
}