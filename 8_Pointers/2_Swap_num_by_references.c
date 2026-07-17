//Swap two numbers using call bb reference
#include <stdio.h>
void swap(int* a,int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
        return;
    }
    int main(){
        int a=5;
        int b=7;
        printf("Before :a = %d, b = %d\n",a,b);
        swap(&a,&b);
        printf("After  :a = %d, b = %d",a,b);
    }