//combination
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
   int com=fact(n)/(fact(r)*fact(n-r));
   printf("Ways can you select %d members out of %d is %d",r,n,com);                   
   return 0;
}