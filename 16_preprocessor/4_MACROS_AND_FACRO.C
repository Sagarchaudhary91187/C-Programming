#include<stdio.h>
#define Pi 3.14159265359        //define is use to define a macro constant
#define AREA(r) (Pi*r*r)       //macros function are defined using #define directive

// float AREA(float r);{      //function prototype
//     return Pi*r*r;
// }

int main(){
    printf("Value of Pi: %.11f\n",Pi);
    float radius=5.0;
    printf("Area of circle: %.2f\n", AREA(radius));
    return 0;

}

//   #define is on the place of making a function for simple calculations we can use macros.           *
//   we dont have to use semicolon(;) at the end of macro definitions.         *
//   we dont want to use format specifier while using macro constants.      *
//Note: Macros are replaced by the preprocessor before compilation, so they do not consume memory like variables or functions.