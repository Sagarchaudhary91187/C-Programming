//If cost price and selling price of an item is input through the keyboard, write the program to determine whether the seller has made profit or incrueed loss. also determine how much profit he made or loss he incurred
#include<stdio.h>
int main(){
    float c,s ;
    printf("Enter cost price of an item : ");
    scanf("%f",&c);
    printf("Enter selling price of an item : ");
    scanf("%f",&s);
    if(c<s){
        float profit=s-c;
        printf("The seller has made PROFIT of %f Rs.",profit);
    }
    else if(c==s){           //reminding '==' is used for compare 
        printf("The seller has no profit and no loss");
    }
    else{
        float loss=c-s;
        printf("The seller has a loss of %f Rs.",loss);
    }
    return 0;

}