//Find the unique num in a given array where every num except one is present repeated twice.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr [7]={1,2,3,2,1,4,3};
    for(int i=0;i<7;i++){
        bool flag=0;
        for(int j=0;j<7;j++){           // check whole array, not just right side
            if(j!=i && arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Unique num is: %d\n",arr[i]);
            break;
        }
    }
}