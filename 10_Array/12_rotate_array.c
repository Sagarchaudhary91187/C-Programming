//Rotate the given array 'a' by k steps, where k is non-negative.
// Note : k can be greater than n as well where n is the  size of array 'a'

//Steps: TO ROTATE ARRAY K TIMES
//1) k=k%n
//2) reverse(arr,0,n-1)
//3) reverse(arr,0,k-1)
//4) reverse(arr,k,n-1)
#include<stdio.h>
void reverse(int a[],int x, int y){
    int i=x,j=y;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
}
int main(){
    int k;
    #define N 5
    int arr[N] = {1,2,3,4,5};

    printf("Enter num of steps to rotate: ");
    scanf("%d",&k);
    if(k>N) k=k%N;

    for (int i = 0; i<N; i++){
       printf("%d ",arr[i]);
    }printf("\n");

    reverse(arr,0,N-1);               
    reverse(arr,0,k-1);                 
    reverse(arr,k,N-1);                 
    for (int i = 0; i<N; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}