//WAP to find a dublicate element in an array of integers
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,3};
    bool flag=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                printf("Dublicate element is: %d",arr[i]);
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) printf("No dublicate element found");
    return 0;
    }