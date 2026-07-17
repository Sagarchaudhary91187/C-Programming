
#include<stdio.h>
#include<string.h>
int main(){
    char str[39];   
    printf("Enter string you want to reverse: ");  
    gets(str);
    //size of string
    int count=0,i=0;
    while(str[i]!='\0'){ 
            count++;
            i++;
    }
    printf("size = %d\n ",count);
    for(int i=0,j=count-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j] =temp;}
    puts(str);
    return 0;}
 