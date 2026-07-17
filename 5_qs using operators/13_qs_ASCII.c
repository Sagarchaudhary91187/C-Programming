//WAP to print all he ASCII values and their equivalent characters of 25 aplhabet using a while loop.

//Method 1: old

// #include<stdio.h>
// int main(){
//     int n;
//     printf("\nASCII value A-Z\n");
//     for(int i=65;i<=90;i++){
//         printf("ASCII value of %c is %d.\n",i,i);}
//     printf("\nASCII value a-z\n");
//     for(int i=97;i<=122;i++){
//         printf("ASCII value of %c is %d.\n",i,i);}
//     return 0;
// }

//Method 2: (Type Casting)

//Type Casting --> is use to change a variable form one datatype to another

#include<stdio.h>
int main(){
    printf("\nASCII value A-Z\n");
    for(int i=65;i<=90;i++){
       char ch = (char)i;
       printf("%c = %d\n",ch,i);
    }
    printf("\nASCII value a-z\n");

    for(int i=97;i<=122;i++){
       char ch = (char)i;
       printf("%c = %d\n",ch,i);
    }
}