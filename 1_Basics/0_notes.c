/*--------------------------------------------------C-LANGUAGE-----------------------------------------------------
✅C is Compiler language/ Procedual language/ Middle language
✅Developed by 'Dennis Retchie' at AT & T's Bells lab in 1972 in USA
✅open source, portable
✅platform dependent
✅easy to debbuing
✅dynamic memory allocation
✅not have Garbage collector but c++ ,java scriipt have garbage collector

#include<stdio.h> -----------> known as HEADER FILE ie. (.h) is extention of header file
*with out main() function we can compile a program but not run

NOTE- compiler is used to convert high level language to low level language 
                            ie.  source code to machine code(binary language) 

*/
#include<stdio.h>
#include<windows.h>
int main(){
  printf("Beep sound of 10 frequency to 1000 frequency of 300 ms sound");
  // Beep(10,300);Beep(30,300);Beep(50,300);Beep(70,300);Beep(100,300);
  // Beep(200,300);Beep(300,300);Beep(400,300);Beep(500,300);Beep(400,300);
  // Beep(500,300);Beep(600,300);Beep(700,300);Beep(800,300);Beep(900,300);
}

/*

-----------------------------------------------Arthemetic Operattors-------------------------------------------------
 |Operator| Name          | Description                         | Example (`a = 10`, `b = 5`) |
 | -------| ------------- | ----------------------------------- | --------------------------- |
 | `+`    | Addition      | Adds two operands                   | `a + b = 15`                |
 | `-`    | Subtraction   | Subtracts second operand from first | `a - b = 5`                 |
 | `*`    | Multiplication| Multiplies two operands             | `a * b = 50`                |
 | `/`    | Division      | Divides numerator by denominator    | `a / b = 2`                 |
 | `%`    | Modulus       | Gives remainder of division         | `a % b = 0`                 |



*//*
------------------------------------------------------MODULUS :-------------------------------------------------------
if a<b then (a % b) = a
 imp eg.
  | Situation        | Result                                  | 
  | ---------------- | -------------------------------------   |
  | `10 % 3`         | `1`                                     |
  | `5 % 2`          | `1`                                     |
  | `6 % 6`          | `0`                                     | 
  | `7 % 10`         | `7`                                     |
  | `a % 0` (error!) | ❌ **Division by zero is not allowed*   |
  |
  |--> ❌  You can't use % with float or double:
  |   float a = 5.5, b = 2.2;
  |   float r = a % b; -----> ❌ This is invalid!
  |
  |-->🛠 If you need remainder with float, use fmod() from <math.h>:
  |   #include <math.h>
  |   float r = fmod(5.5, 2.2);  // ✅



*//*
------------------------------------------------------ERRORS :-----------------------------------------------------
SYNATX ERROR: occur when we violet any ggramatical rule in programming language eg. ;,()""etc
RUNTIME ERROR:any error that causes abornaormal program termination during execution eg. a=10/0
LOGICAL ERROR: occurs on incorrect statement or the algorithm



*//*
----------------------------------------- ------HIERARCHY--OF--OPERATORS-----------------------------------------IMP
In maths as we follow BODMAS as same as that in programming
but it follows like B O D/M A/S
D/M & A/S is decided during compilation 
computer follow LEFT to Right ie. which comes first gives fives priority

| **Precedence Level** | **Operators**                    | **Description**         |Associativity|
| 1                    | `()`                             | **Parentheses**         |L to R|
| 2                    |++,--,!,~,+,-,*,&,sizeof,(type)   | **Unary operators**     |R to L|
| 3                    | `*`, `/`, `%`                    | **                      |L to R|
| 4                    | `+`, `-`                         | **add & sub**           |L to R|
| 5                    | `<<`, `>>`                       | **Bitwise shift**       |L to R|  
| 6                    | `<`, `<=`, `>`, `>=`             | Relational operators    |L to R|
| 7                    | `==`, `!=`                       | **Equality operators    |L to R|
| 8                    | `&`                              | **Bitwise AND**         |L to R|
| 9                    | `^`                              | **Bitwise XOR**         |L to R|
| 10                   | `\|`                             | **Bitwise OR**          |L to R|
| 11                   | `&&`                             | **Logical AND**         |L to R|
| 12                   | `||`                             | **Logical OR**          |L to R|
| 13                   | `?:`                             | **Ternary operator**    |L to R|
| 14                   |=,+=,-=,*=,/=,%=,<<=,>>=,&=,^=,`=`| **Assignment operators  |R to L|
| 15                   | `,`                              | **Comma operator**      |L to R|



*//*
------------------------------------------------VARIABLE-NAMING-RULES-----------------------------------------------
Rule No.	Rule Description	                                                     EXAMPLE / NOTE
1️⃣        	Can use letters (A–Z, a–z), digits (0–9), underscore (_)	            maRks1, total_sum
2️⃣   	    Must begin with a letter or underscore	✅                           _value,count  ❌1count
3️⃣       	No spaces or special characters allowed	                             ❌my variable, @temp
4️⃣	        Case-sensitive	                                                      Age ≠ age
5️⃣	        Cannot be a keyword (like int, return)	                             ❌ int

NOTE- (_) underscore is only special charcter which is only allowed to name variable 


*//*
------------------------------------------------keywords-in-C-language-are:-------------------------------------------

    break,  char,  continue,  double,   if,     else,    float,   for,   int,      long,    return,  short,  while, do,        auto,     case,   const,   default, enum,  goto,     register, signed, sizeof, static,struct,    switch,   typedef,extern,  union,   unsigned, void,  volatile, 



    */