//if ages of Sagar, Yash, Subodh are  input through the keyboard, write a program to determine the youngest of the three

// Method 1

#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the age of Sagar: ");
    scanf("%d",&n1);
    printf("Enter the age of Yash:  ");
    scanf("%d",&n2);
    printf("Enter the age of Subodh: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3){      
        printf("Sagar is Oldest ");
    }
    else if(n2>n1 && n2>n3){
        printf("Yash is Oldest ");
    }
    else if(n3>n2 && n3>n1){
        printf("Varun is Oldest ");
    }
    else{
    
    }
    return 0;
}

//Method 2    (nested list)

#include<stdio.h>
int main(){
    int s,y,v;
    printf("Enter the age of Sagar: ");
    scanf("%d",&s);
    printf("Enter the age of Yash:  ");
    scanf("%d",&y);
    printf("Enter the age of Subodh: ");
    scanf("%d",&v);
    if(s>y){
        if(s>v)
        printf("Sagar is the oldest one");
        else
        printf("varun is gretest one"); 
    }  
    else{
        if(y>v)
        printf("yash is greatest");
        else
        printf("varun is greatest");
    }
}
