//Prog: WAP to check the num is even or odd
#include<stdio.h>
int main(){
   int a;
   printf("Enter the number : ");
   scanf("%d",&a);
//    if(a%2==0){                          ------|   
//       printf("The num is Even");              |   
//    }                                          |  This  all work is done in 6 line
//    else{                                      |  We can further short it
//       printf("The num is Odd");         ------| 
//     }

//    if(a%2==0)                           ------|  This  all work is done in 4 line 
//       printf("The num is Even");              |  We can further short it by using  
//    else                                       |  TERNARY OPERATOR.
//       printf("The num is Odd");         ------| 


// -------------------------------------TERNARY-OPERATOR---------------------------------------------

(a%2==0)   ?    printf("The num is Even")    :     printf("The num is Odd"); 
//   |                   |                                  |
//   |                   |                                  |
// Condition |   Code need to execute     |    Code need to execute
// usually   |  if IF statment is true    |   if IF statment is not true
// written   |                            |   ie. ELSE statment is true
// in IF     |                            |
}

