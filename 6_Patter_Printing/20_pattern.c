//       A
//     A B   [Alaphabet Triangle]
//   A B C
// A B C D
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=65;k<=i+64;k++){
            char ch = (char)k;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}