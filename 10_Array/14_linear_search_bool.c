//Given an array containing elements and a num 'x'. Find out if 'x' lies in the array or not, if YES then print the index
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x=44,y;
    bool flag = 0;
    int arr[5]={99,55,44,33,82};
    for(int i=0;i<5;i++){
        if(arr[i]==x){ 
            flag=1;
            y=i;
            break;
        }
    }
    if(flag) printf("Yes present in the array \nindex=%d",y);
    else printf("Not present in the array");
    return 0;
}