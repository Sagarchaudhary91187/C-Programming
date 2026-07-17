//Concept 
//if we use IF on the place of ELSE IF 
//
// if(per>90)
// printf("Excellent ");
// if(per>80)
// printf("Very good ");
// if(per>70)
// printf("Good ");
// if(per>60)
//
//input = 91
//output = Excellent Very good Good 
//b/c '91' is greater than 90,80,70
//
//Solution:
//use "ELSE IF" on the place of "IF", b/c after an IF statment become true the next IF statment should be run next, but if we use ELSE IF on the place of IF, when IF statment become true then next ELSE IF statment cannot be run 
//OUTPUT on using ELSE IF on the place of IF
//input=91
//output=Excellent




//PROG:  Take input percentage of a student and print the grade according to marks:
// 1) 90-100 Excellent
// 2) 80-90 Very good
// 3) 70-80 good
// 4) 60-70 can be better
// 5) 50-60 Average
// 6) 40-50 Below average
// 7) <40 fail

//Method 1:

#include<stdio.h>
int main(){
    int per;
    printf("Enter the percentage of the student: ");
    scanf("%d",&per);              
    if(per>90)
    printf("Excellent");
    else if(per>80)
    printf("Very good");
    else if(per>70)
    printf("Good");
    else if(per>60)
    printf("can be better");
    else if(per>50)
    printf("Average");
    else if(per>=40)
    printf("Below Average");
    else
    printf("Fail");
    return 0;
}

//MEthod 2:    (not using ELSE IF statment)

#include<stdio.h>
int main(){
    int per;
    printf("Enter the percentage of the student: ");
    scanf("%d",&per);              
    if(per>90){
    printf("Excellent");
    }
    else{
        if(per>80){
            printf("Very good");
        }
        else{
            if(per>70){
                printf("Good");
            }
            else{
                if(per>60){
                    printf("Can be better");
                }
                else{
                    if(per>50){
                        printf("Average");
                    }
                    else{
                        if(per>=40){
                            printf("Below Average");
                        }
                        else{
                            printf("Fail");
                        }
                    }
                }
            }
        }
    }  
    return 0;
}