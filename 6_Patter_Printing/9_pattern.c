// A B C D
// A B C D           [Alaphabet Square]
// A B C D
// A B C D 
#include<stdio.h>
int main(){
    int n;
    printf("Enter side of square: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=65;k<=n+65;k++){
            printf("%c ",k);        
        }
        printf("\n");
    }
    return 0;
}