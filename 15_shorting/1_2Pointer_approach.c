/*                ------------ *2-Pointer approach --------------------
2-Pointer approach --> algorithms


Ques : Given an array of integers numbers that is already sorted in non-decreasing order, 
find two numbers such that they add up to a specific target number.
*/

#include<stdio.h> 
int main(){
    int n=8;
    int arr[8]={1,2,3,4,5,8,9,10};
    int target = 8;

//Method-1 

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==target){
    //             printf("founded\n");
    //             printf("%d+%d=%d",arr[i],arr[j],target);
    //             break;
    //         }
    //     }
    // }


    //code workes fine but time complexity is O(n^2)
    //we can optimize it using 2-pointer approach

//Method-2

    int i=0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("Founded--> %d+%d=%d",arr[i],arr[j],target);
            break;
        }
        if(arr[i]+arr[j]>target) 
            j--;         //to decrease
        if(arr[i]+arr[j]<target)
            i++;        // to increase
    }
    //this methord is called two pointer approach in which we check from both side and chanage a/c needs
    //time complexity --> O(n)
    //space complexity --> O(1)
}