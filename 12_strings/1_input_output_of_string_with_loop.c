// A=65    Z=90
// a=97    z=122
// 0=48    9=57

//   \0   --->    NuLL Character    ----> ASCII Value = 0
#include<stdio.h>
#include<string.h>
int main(){
    char str[] ="hello\0";                        //type - 1
    char str0[] ="hello";                          //type - 2
    int i;
    while(str[i] != '\0'){                        //concept of "\0"
        printf("%c",str[i]);
        i++;
    } printf("\n");
    for(int i=0;i<=4;i++){                          //also in str2[]  
        printf("%c",str0[i]);
    }
    printf("%s\n",str0);
    printf("%s",str);

}
/*
NOTE --> WE CAN ALSO MODIFY OR ACCESS SINGLE CHARCTER OF STRING ARRAY
printf("%c",str[3]);  accessing
printf("%d",str[3]);    
str[0]= 'M';          modifying
str[0]= 97;


NOTE: compiler auto detect \0 in array of string at last of the string.
compter automatically add \0 after string thats why size of string is always n+1 
where n is number of charcters




Some ways to print particular element
str[i]  == i[str]  == *(arr + i) == *(i + arr)
*/