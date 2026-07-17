//Write a program to copy the contents of one array into another in the reverse order.
#include<stdio.h>
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter integer %dst: ",i+1);
        scanf("%d",&arr[i]);
    }
    int rra[n];
    for (int i=0,j=n-1; i<n,j>=0; i++,j--){
        rra[j]=arr[i];
    }
    // for (int i=0; i<n; i++){
    //     rra[j]=arr[n-1];
    // }
    for (int i = 0; i <=n-1; i++)
    {
       printf("%d ",rra[i]);
    }
    
    
}