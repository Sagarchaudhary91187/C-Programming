//GIven an array of marks of 10 students, if the marks of students, if the mark of any student is less than 35 print its roll num.
//[Here roll num is refers to the index of the array.]
#include<stdio.h>
int main(){
    printf("NOTE: Marks out of 100\n");
    int marks[10];
    for(int i=0;i<=9;i++)
    {
        printf("enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        if(marks[i]<35) printf("\n%d,",i);
    }
    
}