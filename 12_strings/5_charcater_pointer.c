//character pointer can also be used to store address of a string
#include<stdio.h>
#include<string.h>
int main(){
    char* pnt = "Sagar singh is bad boy";
    //pnt[5]='A';       Not working     (permission denied) 
    puts(pnt);
    pnt ="Sagar Singh is good boy"; //working
    puts(pnt);

/*
Note: Such direct initialisation using pointers results in a read-only
memory allocation of character arrays and hence, causes undefined
behaviour when we try to change the individual characters.
ptr[0] = 'm';    // Not Valid

But we can modify the entire string using char pointer as shown below:
ptr = "New String"; // Valid

*/

    char str[]="Sagar #Jaat";
    str="Sagar #Singh";  //not valid
    puts(str);
    str[6]='$';     //working
    puts(str);

    /*In normal intialization we can modify individual characters but not 
        the entire string.
    */

    char* ptr = str;
    ptr = "Sagar Chaudhary";  //not working
    *ptr = 'P';              //Working
    printf("%s",str);

    return 0;
}