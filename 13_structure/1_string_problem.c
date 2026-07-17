#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    str = "Sagar Singh";           //
    printf("%s\n",str);           //
    puts(str);                   //
    
//we cannot assign string like this after declaration of string array,
//we can only do this during declaration of string array
//IF we need to declare and assign later we can use strcpy() function
//eg- strcpy(str,"Sagar Singh");

strcpy(str,"Sagar Singh");
printf("with strcpy-->%s",str);
}