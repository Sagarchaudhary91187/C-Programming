#include<stdio.h>
int main(){
    short a=32767;  //❌give warning bc short have limit of -32768 to 32767
    // short a=32;  //✅No Problem

    printf("%d",a);
    return 0;
}
       //int x --->4 byte(32 bits)         
      //short x --->2 byte(16 bits)
     //
    //long long x --->8 bytes
   //float x ---> 4 bytes

  // NOTE---> in n bits 2^n number can are stored
 //    2^16== 65536 numbers
//   ie. proved SHORT can store num b/w -32768 to 32767
           
    //char --->1 byte(8 bits) ie. 256 characters