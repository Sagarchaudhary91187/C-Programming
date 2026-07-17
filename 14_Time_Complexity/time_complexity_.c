/*Time Complexity --> Notation --> Big O Notation
 The time complexity of an algorithm is the number of basic operations performed by the algorithm.
 Notation --> Describes the upper bound of the time complexity in terms of the input size (n).
O(1) - Constant Time Complexity
O(n) - Linear Time Complexity
time complexity increases linearly with input size.

time complexity is measured on the same device and same compiler

in competitive programming we use time complexity to check whether our solution will run within time limit or not
if not in time limit we have to optimize our solution to reduce time complexity
TLE --> Time Limit Exceeded

*//*

Ques: Given an array of integers with 1 to n elements
and the size of the array if n+1. One element is
occurring more than once i.e duplicate number is
present. Find the duplicate element.

*/
#include<stdio.h>
int main(){


//Method 1: Using Nested Loops (Brute Force Approach)

    int a[12] = {8,5,3,2,4,9,6,1,8,4,7,10};
    int n=12;
    printf("By Method 1\n");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){          
            if(a[i]==a[j]){
                printf("%d is two times in array\n",a[i]);
                break;
            }
        }
        
    }
    printf("\n");
    printf("By Method 2\n");

//Time Complexity: O(n^2) because of nested loops
//Effective in term of space

//MEthod 2: Using Frequency Array
    int freq[11]={0}; //size n ie 10+1
    for(int i=0;i<n;i++){
        freq[a[i]]++;   //freq[i] is incremented by 1
    }
    for(int i=0;i<=10;i++){
        if(freq[i]>1){
            printf("%d is two times in array\n",i);
        }
    }
//Time Complexity: O(n) single loop
//Effective in terms of time but not in space
//Space Complexity: O(n) for frequency array
    return 0;
}


//We mostly gives importance to time complexity than space complexity
//because in competitive programming time limit is given
//and users have to optimize their solution to run within time limit

/*Rules to calculate time complexity

O(n+k) ~ O(n), where k is constant
O(n*k) ~ O(n), where k is constant
if nested loops are like i<=n and j<=i then n(n+1)/2 operations and time complexity ~ O(n^2)
for two nested loop O(n*m) where n and m are size of two loops
if both loops are of size n then O(n^2)

//Same apply with space comlexity
*/