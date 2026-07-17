//           char str[] ="hello"; 
//           printf("%s",str);


// Input and Output of String using gets() and puts()
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];     
    //input string - 1 way   [Only the first word will be considered as input ie before first space]
    scanf("Enter Input:%s",str);  
    //input string - 2 way  [enter full line with spaces]
    printf("Enter Input: ");
    gets(str);       
    //input string - 3 way  [same as way-2]
    scanf("%[^\n]s",str);       

//output string
    printf("First Output: %s\n",str); 
    puts("Second Output: ");      //Automatic \n bhe deta hay
    puts(str);
    return 0;
}


//  gets AND puts ARE BEST FOR STRING INPUT AND OUTPUT IN C LANGUAGE.