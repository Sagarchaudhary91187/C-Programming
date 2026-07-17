// WAP to print 1 to n using Recursion(Paremeter)
#include<stdio.h>
void fun(int i,int n){        //using extra parameter              
    if(i>n) return;
    printf("%d ",i);  
    fun(i+1,n);
    return;       
}
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    fun(1,n);
    return 0;
}


// fun(){
//                 //base case 
//     code
//               //recursive call
//     code 
//
//   return;
// }