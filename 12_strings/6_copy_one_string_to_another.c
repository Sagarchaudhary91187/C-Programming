#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Sagar Singh";
    char *str2  = str;    //str2 is shallow copy of str
    str[0] = 'M'; 
    puts(str);
    puts(str2);     //both changed

    char str2[] = "Sagar Singh"; //This is  hard copy of str
    str[0] = 'P';
    puts(str);
    puts(str2);
/*  
When we make copy of str in str2 change in str also reflects to str2.

Because this is Shallow Copy

Not a deep copy: Here, s2 points to the same character array and
hence, change in s1 is also reflect in s2.
*/
}