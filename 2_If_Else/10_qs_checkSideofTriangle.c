//Take 3 numbers input and tell if they can be sides of a triangle
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter first side--->");
    scanf("%d",&s1);
    printf("Enter second side: ");
    scanf("%d",&s2);
    printf("Enter third side: ");
    scanf("%d",&s3);
    if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2){      
        printf("%d, %d, %d can be sides of triangle",s1,s2,s3);
    }
    else{
        printf("%d, %d, %d can't be sides of triangle (INVALID TRIANGLE)",s1,s2,s3);
    }
}