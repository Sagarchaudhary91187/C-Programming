#include<stdio.h>
int main(){
    int x = 4, y = 3, z;
    z = x-- -y;
    printf("%d ,%d ,%d",x,y,z);
    return 0;
}


/* -----------------------------------Important NOTE-----------------------------------
 x++ = x + 1    (post increment)  means use x then increment
 ++x = x + 1    (pre increment)   means first increment then use
 x-- = x - 1    (post decrement)  means use x then decrease  
 --x = x - 1    (pre decrement)   means first decrease then use
 
 Note- sometime results are same but some time results may vary
*/
