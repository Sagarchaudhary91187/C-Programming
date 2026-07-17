//Copying Entire Structure variable data to another Structure variable
#include <stdio.h>
#include <string.h>
int main(void) {
    typedef struct pokemon {    
        int hp;              
        int speed;           
        int attack;
        char tier;
        char power[16];       
    }pokemon;    
    
    pokemon pikachu = {100,200,300,'A',""};
    strcpy(pikachu.power, "Thunderbolt");
    pokemon snorlax;    
    
//Method 1: Copying individual data members

    // snorlax.hp = pikachu.hp;             //copying individual data members
    // snorlax.speed = pikachu.speed;
    // snorlax.attack = pikachu.attack;
    // snorlax.tier = pikachu.tier;
    // strcpy(snorlax.power, pikachu.power);

//Method 2: Copying entire structure variable data to another structure variable

    snorlax = pikachu;         //copying entire structure variable data
                              // this is deep copy
                             // if changing in one variable it will not affect other variable
    printf("Snorlax Details:\nHP: %d\nSpeed: %d\nAttack: %d\nTier: %c\nPower: %s\n",
        snorlax.hp,
        snorlax.speed,
        snorlax.attack,
        snorlax.tier,
        snorlax.power
    );

    pikachu.hp = 500;          //changing in one variable does not affect other variable
    printf("Pikachu HP: %d\n", pikachu.hp);
    printf("Snorlax HP: %d\n", snorlax.hp);
    snorlax.speed = 600;
    printf("Pikachu Speed: %d\n", pikachu.speed);
    printf("Snorlax Speed: %d\n", snorlax.speed);
    


    return 0;
}


    ///if we change in one variable it will not affect other variable          --IMP--
    //THIS IS DEEP COPY



    //We cannot compare two structure variable like if(struct1==struct2;);
    //We have to compare individual data members each time
    
