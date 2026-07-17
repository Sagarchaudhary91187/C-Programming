//WAP to reverse the array without using any extra array
#include<stdio.h>
void rev(int a[]){
    int i=0,j=4;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    rev(arr);
    for (int i = 0; i <5; i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}