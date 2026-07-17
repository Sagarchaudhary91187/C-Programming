//WAP to count digits of a given number.

//METHOD 1:

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(int i=1;i>=1;i++){
//         n=n/10;        
//         if(n==0){
//             printf("%d digits",i);
//             break;
//         }
//     }
//     return 0;
// }

//METHOD 2:

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("%d digits",count);
}

// CONCEPT:
//if any int number is divide by 10, then last digit is removed
//no of times the n/10 is the no of digit until n==0;