//WAP to make sum of digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int ld,sum = 0 ;
    while(n!= 0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("%d is sum of digits",sum);
}
//agar ham kise digit ka modulas 10 kay sath niklaty hay ie. n%10 to uske last digit hamary pas aa jate hay
//eg. 9675 % 10 = 5
//ek bar hamay last digit mil gay to ham usko 10 say divide karkay uske last digit remove kar digay
//eg. 9675 / 10 = 967
//same process repeat and har baar ham last digit alag karkay usko add kartay jaigay