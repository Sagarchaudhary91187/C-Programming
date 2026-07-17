//string 
# include<stdio.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str; // ptr now points to str[0]
    int i = 0;
    while(*ptr != '\0'){      //*ptr for value <--->  ptr for address
        printf("%c",*ptr);
        ptr++;
        i++;
        }
    
    
}