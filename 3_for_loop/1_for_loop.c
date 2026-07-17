/*---------------------------------------------L-O-O-P-S--------------------------------------------
LOOPS ARE USED FOR REPETATION


for (initialization; condition; increment/decrement){
        code to be executed
    }

-->Initialization (runs only once)
-->Condition (checked before every loop)
-->Increment (after each iteration)
*/

// for a programer DRY PRINCIPLE is very important ie.(do not repeat your self)

#include<stdio.h>
int main(){
    int n;
    printf("PLZ Enter no. of times you want to annunce that You are Gaandu: ");
    scanf("%d",&n);
    for(int i=1;i<=n ;i++ ){               //i++ means i=i+1
        printf("You are Gaandu\n");        
    }
//  printf("%d",i);     //Here ERROR is occur b/c the concept of SCOPE of variable (check 2.12 file)
    return 0;          //to solve this declare variable outside of for statment 
}                      
/*
here loop steps are                                                              
                            step1: intialization                               
          |--------------<  step2: check condition <-------------|             
          |                 step3: go inside loop                ^             
          |--------------   step4: updation/incrediation >-------|             
*/                                                                             

 