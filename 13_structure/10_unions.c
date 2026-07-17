/*----------Structure vs Unions-----------------
 structures-->  all members can be used at time,
    each member has its own memory location.
    total size of structure will be sum of sizes of all members.
    Example:
    struct Data {
        int i;          //4 bytes
        float f;       //4 bytes
        char str[20];  //20 bytes
    };
    size of Data = 4 + 4 + 20 = 28 bytes
 
 unions --> only one member can be used at time
    because all members share same memory location.
    maximum size of union will be size of largest member.
    Example: 
    union Data {
        int i;          //4 bytes
        float f;       //4 bytes
        char str[20];  //20 bytes
    };
    size of Data = max(4, 4, 20) = 20 bytes
--------------------------------------------*/
#include <stdio.h>
#include <string.h>
typedef union pokemon {    
    int hp;              
    int speed;           
    int attack;
    char tier;
    char power[16];       
} pokemon;
int main(void) {
    pokemon pikachu;    
    
    pikachu.hp = 100;
    printf("Pikachu HP: %d\n", pikachu.hp);

    pikachu.speed = 200;  //overwrites hp
    printf("Pikachu Speed: %d\n", pikachu.speed);
    printf("Pikachu HP after updating speed: %d\n", pikachu.hp); //undefined behavior
    
    strcpy(pikachu.power, "Thunderbolt"); //overwrites speed
    printf("Pikachu Power: %s\n", pikachu.power);
    printf("Pikachu Speed after updating power: %d\n", pikachu.speed); //undefined behavior

    return 0;
}