#include<stdio.h>
#include<strings.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        char type;
        int speed;
        int attack;
    }pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp=100;
    pikachu.type='A';
    pikachu.speed=200;
    pikachu.attack=300;

    //Printing address of pointer in structures
    pokemon* x = &pikachu;  //store address of pikachu.hp in x ie first member address
    printf("%p\n",x);
    printf("%p\n\n",&pikachu);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.type);
    printf("%p\n",&pikachu.speed);
    printf("%p\n\n",&pikachu.attack);
    
    //updating or assingning value in structure pointer

    (*x).hp = 70;                    // Way - 1; 
    (*x).type='B';                  // Way - 1; 
    (*x).speed=80;                 // Way - 1; 
    (*x).attack=90;               // Way - 1; 
    printf("%d\n",pikachu.hp);
    printf("%c\n",pikachu.type);
    printf("%d\n",pikachu.speed);
    printf("%d\n\n",pikachu.attack);

    x->hp = 80;                      // Way - 2; 
    x->type='B';                    // Way - 2; 
    x->speed=90;                   // Way - 2; 
    x->attack=1000;               // Way - 2; 
    printf("%d\n",pikachu       
    printf("%c\n",pikachu.type);
    printf("%d\n",pikachu.speed);
    printf("%d\n\n",pikachu.attack);
}
