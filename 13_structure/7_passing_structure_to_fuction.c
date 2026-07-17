//a structure varible can be passed to a function
#include<stdio.h>
#include<strings.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        char type;
        int speed;
        int attack;
    }pokemon;
                            //this will make a copy of varible
void fun(pokemon a){       //structure are passed by value
    printf("%d",a.hp);
}
int main(){
    pokemon chalighard;
    chalighard.hp=10;
    fun(chalighard);
    return 0;
}