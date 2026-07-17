//Imp: Prog: WAP to print reverse of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ld,r=0;
    while(n>0){
        ld=n%10;
        r=r+ld;
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("%d is reverse of number %d",r,n);
    
}
/*
WORKING:
if (n=4321)
ld=n%10;  ----> 1   ie. n%10 is use to store last digit of number[n] in variable [ld].
r=r+ld;  ----> 1    inetially r=0 so we add [ld] in [r]
r=r*10;  ----> 10   to shift digit from ones to tens place 
n=n/10;  ----> 432  to remove last digit of a number[n]

(now n=432)
ld=n%10;  ----> 2        ie. n%10 is use to store last digit of number[n] in variable [ld].
r=r+ld;  ----> 10+2=12   inetially r=0 so we add [ld] in [r]
r=r*10;  ----> 120       to shift digits from ones to tens place 
n=n/10;  ----> 43        to remove last digit of a number[n]
*/