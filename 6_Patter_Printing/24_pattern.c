//                     1
//                   1 2 1            [Mirrored Number Pyramid  Mast]
//                 1 2 3 2 1
//               1 2 3 4 3 2 1  
#include<stdio.h>
int main(){
    int n;
    printf("Enter common side of isoselius triangle: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){   //spaces ke liye loop
             printf(" ");
            }
        int k=1;
        for(k=1;k<=i;k++){         //num triangle
            printf("%d",k);
            }
        for(int l=1;l<=i-1;l++){      //last numbers
            printf("%d",k-l-1);
        }
        printf("\n");
        }   
    
    return 0;
    }


    //For Revision QS-23 of pattern prinnting video by college wallah