//     A
//    ABA
//   ABCBA                     [palindromic alphabet pyramid]
//  ABCDCBA
// ABCDEDCBA


//Method 1:

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a common side of isosalius triangle :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++)
//             printf(" ");
//         int k;
//         for(k=65;k<=i+64;k++)
//             printf("%c",k);
//         for(int l=k-2; l>=65; l--)  // Fixed: start from k-2, go down to 65
//             printf("%c", l);          // Fixed: print chr(l), not chr(k)
//         printf("\n");
//     }
// }


//Method 2:  Clear code
#include<stdio.h>
int main(){
    int n;
    printf("Enter a common side of isosceles triangle: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        // Print spaces
        for(int j=0; j<n-i; j++)
            printf(" ");
        
        // Print ascending part
        for(int j=0; j<i; j++)
            printf("%c", 'A'+j);
        
        // Print descending part (excluding middle character)
        for(int j=i-2; j>=0; j--)
            printf("%c", 'A'+j);
            
        printf("\n");
    }
    return 0;
}
