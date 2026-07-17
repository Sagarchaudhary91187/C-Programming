//If an arr contais n elementt, then check iif the given array is a palindrom or not.
#include<stdio.h>
int main(){
    int n=5;
    int arr[n],rra[n], ispal=1;
    for(int i=0;i<n;i++){
        printf("Enter integer %dst: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++){
        rra[i]=arr[n-1-i];
    }
    for (int i = 0; i<n; i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i <n; i++){
       printf("%d ",rra[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] != rra[i]) {
            ispal = 0;
            break;
        }
    }
    if(ispal==1) printf("Array  is palindrom");
    else printf("Array is not palindrom");    
    return 0;
}