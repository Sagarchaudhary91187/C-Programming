
//Find the second largest element in the given Array without using 2 loops
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter integer %dst: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i]){ 
            smax=max;               //Drowback---> give wrong result on {5,4,3,2,1}
            max=arr[i];
        }
    }
    printf("max=%d\n",max);
    printf("second max=%d",smax);
    return 0;
}