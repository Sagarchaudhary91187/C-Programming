//permutation 
#include<stdio.h>
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
   int n,r;
   printf("Enter num of peoples: ");
   scanf("%d",&n);   
   printf("Enter num of members: ");
   scanf("%d",&r); 
   int per=fact(n)/fact(n-r);
   printf("Ways can you arrange %d members out of %d is %d",r,n,per);                   
   return 0;
}