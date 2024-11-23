#include<stdio.h>
int main () {
    struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct Pokemon pikachu;
    printf("Enter the number: ");
    scanf("%d",&pikachu.hp); //here we take in put of pikachu hp
    pikachu.attack=110;
    pikachu.speed=76;
    pikachu.tier='A';

    struct Pokemon  Charizard;
    Charizard.hp=90;
    Charizard.attack=150;
    Charizard.speed=70;
    Charizard.tier='A';
printf("The hp is %d",pikachu.hp);
return 0;    
}