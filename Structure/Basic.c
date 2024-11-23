#include<stdio.h>
int main () {
    struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct Pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=110;
    pikachu.speed=76;
    pikachu.tier='A';

    struct Pokemon  Charizard;
    Charizard.hp=90;
    Charizard.attack=150;
    Charizard.speed=70;
    Charizard.tier='A';
printf("%c",pikachu.tier);
return 0;
    
}