//PROG: Given three points(x1,y1),(x2,y2),(x3,y3), write a program to check if all the three points fall on one straight line

#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1:");
    scanf("%d",&x1);  
    printf("Enter y1:");
    scanf("%d",&y1); 
    printf("Enter x2:");
    scanf("%d",&x2);  
    printf("Enter y2:");
    scanf("%d",&y2); 
    printf("Enter x3:");
    scanf("%d",&x3);  
    printf("Enter y3:");
    scanf("%d",&y3);  
    int s1=(y2-y1)/(x2-x1);
    int s2=(y3-y2)/(x3-x2);
    if(s1==s2)
        printf("(%d,%d), (%d,%d) and (%d,%d) makes a straight line",x1,y1,x2,y2,x3,y3);
    else
        printf("(%d,%d), (%d,%d) and (%d,%d) can't makes a straight line",x1,y1,x2,y2,x3,y3);
    return 0;
    }


//Maths concept:

//  (x1,y1)                 (x2,y2)                    (x3,y3)
//     '_______________________'__________________________'
//     A                       B                          C
//  ABC are in straight line only if (slope of AB = slope of BC)
//   slope(AB)=(y2-y1)/(x2-x1)
//   slope(BC)=(y3-y2)/(x3-x2)
