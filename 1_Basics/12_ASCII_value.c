#include<stdio.h>
int main(){
    char a='A';
    char b='B';
    char c='Z';
    char d='a';
    char e='z';
    char f='0';
    char g='1';
    char h='9';
    char i='@';
    printf("%c %c %c %c %c %c %c %c %c\n",a,b,c,d,e,f,g,h,i);
    printf("%d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i);
// convert ASCII to character  
    int code = 66;
    printf("Character: %c", code);
    return 0;
}
//------------------------------ASCII-Value--------------------------------------
//ASCII stands for American Standard Code for Information Interchange.
    // It assigns a number (0–127) to every character.
    // C uses ASCII to store and work with characters.
    // print using %d in char datatype
// A-Z  --> 65-90
// a-z  --> 97-122
// 0-9  --> 48-57
// space --> 32
