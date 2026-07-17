//print sum of series 1-2+3-4+5-6+7----n terns
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number: ");      //num of terms
    scanf("%d",&n);

//Method 1:

for(int i=1;i<=n;i++){
    if(i%2==0)  sum=sum-i;
    else    sum=sum+i;
    }

//Method 2:

    if(n%2==0)  sum=-(n/2);
    else sum=-(n/2)+n;

printf("%d is the sum of series 1-2+3-4+5.....%d",sum,n);
return 0;
}

//MATHS:
//1+2+3+4+5+6....n   ---->    n(n+1)/2
//1-2+3-4+5-6....n   ----> (1-2)+(3-4)+(5-6)....n   ---> (-1)+(-1)+(-1)...n/2    --->    -(n/2)