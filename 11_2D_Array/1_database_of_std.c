//Write a program to store roll number and marks obtained by 4 students 
// side by side in a Matrix and display the same.
# include<stdio.h>
int main(){
    int r,c,arr[4][2];
    printf("Enter num of students:");
    scanf("%d",&r);
    printf("Enter num of subjects:");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        printf("----:Data of %dth Student:---- \n",i+1);
        for(int j=0;j<c;j++){
        if(j==0){
            printf("Enter Roll no. of %dth Student: ",i+1);
            scanf("%d",&arr[i][j]);
        }
        printf("Enter Marks of %dth Subject: ",j+1);
        scanf("%d",&arr[i][j]);
        }
    }
for(int i=0;i<=r;i++){
    if(i==0) printf("Sr.   ");
    else printf("Sub-%d ",i);
}
for(int i=0;i<r;i++){
    printf("\n");
    printf("St-%d  ",i+1);
    for(int j=0;j<=1;j++)
        printf("%d     ",arr[i][j]);
    }
}