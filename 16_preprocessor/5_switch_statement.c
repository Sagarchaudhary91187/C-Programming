/*---------------switch_case_statement----------------//     useless
*alternative of if-else-if ladder
*used when we have multiple conditions based on single variable
*syntax:
   switch(expression)
   {
       case constant1:
           //code to be executed if expression==constant1
       case constant2:
           //code to be executed if expression==constant2
       ...
       default:
           //code to be executed if expression doesn't match any case
   }

Ques : Write a program to input week number(1-7) and print day of week name using switch case.
*/

#include<stdio.h>
int main(){
    int n;
    printf("enter day number (1-7) : ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;  
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Number");
    }
}