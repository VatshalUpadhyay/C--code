#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Pokemon{    //Global declaration of structure
      int hp;
        int attack;
        int speed;
        char tier;
    }Pokemon;
void fun(Pokemon p){
    printf("%d",p.hp);
    return;
     }

int main () {
Pokemon Pikachu;
Pikachu.hp=60;
fun(Pikachu);
    return 0;
}