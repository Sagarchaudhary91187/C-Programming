/*
Ques : Create a structure to specify data on students withthese attributes
: Roll number, Name, Department, Course, Year of joining. 
Create 2 structure variables. Now, create a function tocheck if two students 
have the same Department. Pass the two structure variable as input to this function.
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
        int Rno;
        char Name[20];
        char Department[20];
        char course[20];
        int yearofjoining;
    }student;
bool sameDepartment(student a, student b) {
    int i = 0;

    while (a.Department[i] != '\0' && b.Department[i] != '\0') {
        if (a.Department[i] != b.Department[i]) {
            return false;
        }
        i++;
    }

    // Both must end at same time
    if (a.Department[i] == '\0' && b.Department[i] == '\0')
        return true;

    return false;
}
void check(student a, student b){
    if(sameDepartment(a,b)){
        printf("Both students are from the same Department.\n");
    } else {
        printf("Students are from different Departments.\n");
    }
}
int main(){
    student s1={1,"Sagar","Science","BCA",2026};
    student s2={2,"Subodh","Science","BCA",2026};
    check(s1,s2);
    return 0;
}