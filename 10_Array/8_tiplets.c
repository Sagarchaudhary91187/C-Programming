//Find the num of tiplets whose sum is equal to tyhe value x
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int count=0;
    for(int i=0;i<=8;i++){         
        for(int j=0;j<=8;j++){                 //for unique pairs ---> for(int j=i+1;j<=8;j++)
            for(int k=0;k<=8;k++){              //for unique pairs --->   for(int k=j+1;k<=8;k++)
            if(arr[i]+arr[j]+arr[k]==num){
                printf("( %d , %d , %d )\n",arr[i],arr[j],arr[k]);
                count++;
                }
            }
        }
    }
    printf("Total num of pairs : %d",count);
    return 0;
}