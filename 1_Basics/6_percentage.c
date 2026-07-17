//input the marks of all subject and calculate percentage
#include<stdio.h>
int main(){
    float p,c,m,e,h;
    printf("Enter marks obtained in physics:");
    scanf("%f",&p);
    printf("Enter marks obtained in chemistry:");
    scanf("%f",&c);
    printf("Enter marks obtained in maths/Biology:");
    scanf("%f",&m);
    printf("Enter marks obtained in english:");
    scanf("%f",&e);
    printf("Enter marks obtained in hindi:");
    scanf("%f",&h);
    // float per=(p+c+m+e+h)/5;
    // printf("Total percentage gain by student is: %f",per);

    //program for marks out of 120
    float per=(p+c+m+e+h)*100/(100*5);
    printf("Total percent of student optained: %f",per);
    return 0;
}
