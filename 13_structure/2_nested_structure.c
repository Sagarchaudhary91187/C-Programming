//we can use nested structure in C programming
#include <stdio.h>
#include <string.h>
int main(void) {
    typedef struct pokemon {    
        int hp;              
        int speed;           
        int attack;
        char tier;
    }pokemon;
    typedef struct skills {   
            struct pokemon normal;     //structure within structure
            char power[16];
            char special_move[20];
        }ability;                  //ability is variable of type skills    
    ability sagar;
    strcpy(sagar.special_move, "Dragon Claw");         //
    sagar.normal.hp = 300;                            //
    printf("HP: %d\nPower: %s\nSpecial Move: %s\n",
        sagar.normal.hp,
        sagar.special_move,
        sagar.special_move
    );

    return 0;
}



/* //This type of nesting is not allowed in C we must be use 
    nested after declarationof full structure
Struct emp {
int ecode;
struct emp e;
};
*/