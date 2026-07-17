/* ------------------structure in C--------------------
    A structure is a user-defined data type in C that allows you to 
    group related variables of different data types under a single name. 
    It is used to represent a record or an object that has multiple attributes.

    In structure elements are stored in continus memory location but in union
    all elements are stored in same memory location. 

    */

#include <stdio.h>
#include <string.h>
int main(void) {
    struct prajati {    //here prajapati is a new data type
    int hp;              //data members  or attributes
    int speed;           
    int attack;
    char tier;
    char power[16];       //string in structure
    }shreyansh;           //shreyansh is a variable of type structure prajati
    
    struct prajati sagar,yash;

    struct prajati ashwani = {ashwani.hp = 40, ashwani.attack = 10, ashwani.speed = 5, ashwani.tier = 'A'};
    struct prajati deepak = { 100,300,200,'D'};
    strcpy(deepak.power,"thanos");
    strcpy(ashwani.power, "Thunder Punch");     //assigning string

    printf("If Deepak is Pokemon\nhp=%d\nattack=%d\nspeed=%d\ntier=%c\npower=%s\n",
       deepak.hp,
       deepak.attack,
       deepak.speed,
       deepak.tier,
       deepak.power
    );

    shreyansh.hp=10;        //assigning values to data members
    printf("HP of shreyansh is %d\n",shreyansh.hp);
    printf("power of aswani is %s",ashwani.power);

    printf("Enter hp of yash:");   
    scanf("%d",&yash.hp);            //input in member of structure

    printf("HP of yash is %d",yash.hp);
    // strcpy(ashwani.power, "ASS");

}