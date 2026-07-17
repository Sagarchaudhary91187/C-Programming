// Find Maximum value out of all the element of array
#include<stdio.h>
int main(){
int arr[3];
for(int i=0;i<=2;i++){
    printf("Enter num %d: ",i+1);
    scanf("%d",&arr[i]);
}
int max=arr[0];
for (int i=0; i<=2; i++){
    if(max<arr[i]){
        max=arr[i];            
    }
}
printf("max num is %d.",max);
}

// method 2

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n=3;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){   //input in every element of array
//         printf("%d : ",i+1); 
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MAX;           //int max=arr[0];
//     for(int i=0;i<=n-1;i++)
//         if(max>arr[i]) 
//             max=arr[i];
//     printf("%d",max);
// }