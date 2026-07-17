/*----------------------------------RECURSION--------------------------------------

Recursion is when a function calls itself to solve a problem. Instead of repeating the same logic multiple times, the function breaks the problem into smaller subproblems of the same type.

It has two key parts:
✅Base case – the condition that stops the recursion (prevents infinite loops).
✅Recursive case – where the function calls itself with a simpler or smaller input.
*/


#include<stdio.h>
int factorial(int n){
    if(n==0) return 1;    //base case
    return n*factorial(n-1);           //recursion
}
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    printf("%d",factorial(n));
}