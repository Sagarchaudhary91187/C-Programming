    
//        *
//      * * *
//    * * * * * 
//  * * * * * * *            [Star Diamand]                     in complete
//    * * * * *
//      * * *
//        *

#include<stdio.h>
int main(){
    int n;
    printf("NOTE: enter only odd number;");
    printf("Enter any side of Diamand: ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }nsp=nsp-1;
        
        for(int k=1;k<=nst;k++){
            printf("*");  
        }nst=nst+2;

        for(int k=1;k<=nst;k++){
            printf("*");
        }
             
        printf("\n");
    }
}