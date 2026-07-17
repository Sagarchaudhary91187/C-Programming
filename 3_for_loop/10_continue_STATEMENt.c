//PROG: GP-100,50,25......n terms
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
         continue;    //skip karo us round ko jismay condition true ho rahe hay
        }
        printf("%d, ",i);
    }
    return 0;
}
//EXPLANATION OF CODE
//FOR function start loop from 1-100 on every interation it check first condition in FOR statment, if it become true then it check condition in IF statment if it becomes true, than due to continue function the true statment terminated or skip following round, and bc the printf statment is in FOR{} the remaining values get printed
