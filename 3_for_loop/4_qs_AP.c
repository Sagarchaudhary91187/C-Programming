//PROG: print AP=1,3,5,7,9.... upto n terms
#include<stdio.h>
int main(){
    int d,n,a;
    printf("Enter difference of AP: ");
    scanf("%d",&d); 
    printf("Enter number of terms: ");
    scanf("%d",&n); 
    printf("Enter first terms: ");
    scanf("%d",&a);
    for(int i=a; i<=(2*n)-1;i=i+d){
       printf("%d, ",i);                 
    }
    return 0;
}

//MATHS:
//eg.        AP=     1   3   5   7   9  .  .  .  .
//commaon difference   2   2   2   2
//terms            a, a+d, a+2d, a+3d, a+4d, ..........., a+(n-1)d
//    first term---^                                          ^---nth term


// nTH term = a+(n-1)d
// nTH term of this AP is = 2n-1
