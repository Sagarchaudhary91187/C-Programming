
//Find the second largest element in the given Array without using 2 loops with NO ERROR
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter integer %dst: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){ 
            smax=max;               
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i])
            smax = arr[i];
    }
    printf("max=%d\n",max);
    printf("second max=%d",smax);
    return 0;
}