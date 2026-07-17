//cricket team
#include<stdio.h>
#include<strings.h>
int main(){
    typedef struct team{
        char name[15];
        int age;
        int test_matches;
        float avg_run;
    }team;
    team arr[3];
    for(int i=0;i<=2;i++){
        printf("Enter name of %dth Crikter:",i+1);
        scanf("%s",arr[i].name);
        printf("Enter age of %dth Crikter:",i+1);
        scanf("%d",&arr[i].age);
        printf("Enter test matches of %dth Crikter:",i+1);
        scanf("%d",&arr[i].test_matches);
        printf("Enter average run of %dth Crikter:",i+1);
        scanf("%f",&arr[i].avg_run);
    }
    printf("Name\tAge\tTest Matches\tAverage Run\n");
    for(int i=0;i<=2;i++){
        printf("%s\t%d\t%d\t\t%.2f\n",arr[i].name,arr[i].age,arr[i].test_matches,arr[i].avg_run);
    }    return 0;
}