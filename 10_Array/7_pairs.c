//Find the total num of pairs in the array whose sum is equal to the given value  x.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer");
    scanf("%d",&num);
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int count=0;
    for(int i=0;i<=8;i++){
        for(int j=0;j<=8;j++){                   //for unique pairs ---> for(int j=i+1;j<=8;j++)
            if(arr[i]+arr[j]==num) count++;
        }
    }
    printf("%d",count);

}