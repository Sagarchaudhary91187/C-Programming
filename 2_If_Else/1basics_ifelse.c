//    if (condition){                // if means check if
//       /* code */
//    }
//   else if (condition)
//   {
//       /* code */
//   }
//   else (condition){               // else means otherwise
//       /* code*/
//    }

// Program to check the num is even or odd

#include<stdio.h>
int main(){
   int n;
   printf("Enter the number : ");
   scanf("%d",&n);
   if(n%2==0){                      
      printf("The num is Even");
   }
   else{                           
      printf("The num is Odd");
   }
   // if(a%2!=0){                        //  '!=' means 'not equal to'
   // printf("The number is odd");
   // }                            
   return 0;
}

       // '=' is use to assign a value
      // '==' is use two compare to values gives true(1) or false(0)
     // '>=' greater than equal to
    // '<=' smaller than equal to
   // '!=" not equal to (comparision)
