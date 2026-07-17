//Find the second largest element in the given Array
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter integer %dst: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    int stemp=arr[0];
    for(int i=0;i<=4;i++)
        if(temp<arr[i]) temp=arr[i];
    for(int i=0;i<=4;i++)
        if(arr[i] != temp && arr[i]>stemp) stemp=arr[i];
    printf("max=%d",temp);
    printf("second max=%d",stemp);
}