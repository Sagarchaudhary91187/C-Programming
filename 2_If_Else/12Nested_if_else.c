//-----------------------------NESTED-CONDITIONING-IF-ELSE------------------------------------
// if (condition)
//  { if (condition)
//    {  if (condition)
//       {  
//           /* code */
//       }
//    }  
//  }
// else
// {
//     /* code */
// }

//PROG: Take positive integer input and tell if it is divisible by 5 or 3 but not by 15

//Method 1:

#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n%15!=0){
        if(n%3==0){
            printf("%d is divisible by 3 but not by 15",n);
        }
        if(n%5==0){
            printf("%d is divisible by 5 but not by 15",n);
        }
    }
    if(n%3!=0 && n%5!=0){
        printf("%d is not divisible by 3,5,15",n);
    }
    if(n%15==0){
        printf("%d is divisble by 3,5,15",n);
    }
    return 0;
}

//Method 2

#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if((n%15)!=0 && ((n%3)==0 || (n%5)==0)){    
            printf("%d is divisible by 3 or 5 but not by 15",n);
        }
    else{
        printf("%d is not matching the required condition",n);
    }
    return 0;
}

    //                   _____________------->priority of [ && > || ]  #hierachy so, compiler
    //              _____|______               first solve && and then || that's why we use 
    //             /            |                            bracket for ||
    //if((n%3)==0 || (n%5)==0) && (n%15)!=0){
    //   printf("%d is divisible by 3 or 5 but not by 15",n);
    // }
    // else{
    //     printf("%d is not matching the required condition",n);
    // }
 

//THE REAL THING in IF ELSE is:
//           if (condition)    ❌ 
//           {                    |
//               statment;        |
//           }                    |
//                                |    if (expression)   ✅
//                                |    {
//                                |       statment;
//                                |    }
//EXAMPLE:                        |
//if( 3 + 2 % 5 )
//   printf("This works even this is not condition");
//if(a=10)
//   printf("Even this works");
//if(-5)
//   printf("also works");



//NOTE-_____________________________________________________________________________________
//IF only check if expression is true then it run not compulsary it is condition or anything|  else except 0(false)                                                                                     |
//__________________________________________________________________________________________|



//----------------------------------scope-of-variable :------------------------------------------
//the scope of variable written in if/else/for sirf uska andar tak he hota hay 
//agar hamnay koi varible if/else/for kay anday assign kia hay to uska bhar koi existance nahe rahega 