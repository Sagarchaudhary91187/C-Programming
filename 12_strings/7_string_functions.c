#include<stdio.h>
#include<string.h>
int main(){
char str[]="Sagar Singh";
char str2[];
//Useful functions for C already in standard library! 

printf("%d\n", strlen(str));

//Returns the length of string

strcpy(char str2, char str);

// Copies the contents of string str to string str2

strcat(char *str, char *str2)

// Concat str string with str2 and stores the result in str

strcmp(char *str, char *str2)

// Compares the two strings

strncpy(char *str2, char *str, int len)

// Copy substring of size len starting from character pointer into str to str2

}