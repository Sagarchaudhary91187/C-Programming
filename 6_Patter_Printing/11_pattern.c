// 1 
// A B          [Alaphabet & Number Triangle]
// 1 2 3 
// A B C D 
#include<stdio.h>
int main(){
    int n;
    printf("Enter length,beadth of Triangle: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  
            if(i%2==0){
                char ch=(char)(j+64);      
                printf("%c ",ch);
            }    
            else printf("%d ",j); 
        }
        printf("\n");
    }

    return 0;
}