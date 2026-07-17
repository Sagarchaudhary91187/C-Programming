// Array of Structures
// In C, you can create an array of structures to store multiple variables of a structure name.

#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{ 
        int power;
        int damage;
        float attack;
        char name[10];
    } pokemon;

    pokemon arr[3];
    arr[0].attack=100.2;
    arr[0].damage=200;
    arr[0].power=300;
    strcpy(arr[0].name,"Pikachu");

    arr[1].attack=400.3;
    arr[1].damage=500;
    arr[1].power=600;
    strcpy(arr[1].name,"Sagar");

    arr[2].attack=700.4;
    arr[2].damage=800;
    arr[2].power=900;
    strcpy(arr[2].name,"Yash");

    for(int i=0;i<=2;i++){
        printf("name : %s\n",arr[i].name);
        printf("attack : %.2f\n",arr[i].attack);
        printf("damage : %d\n",arr[i].damage);
        printf("power : %d\n",arr[i].power);
        printf("\n");
    }

}