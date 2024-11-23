#include<stdio.h>
#include<string.h>
int main (){
typedef struct pokemon{
int hp;
int attack;
int speed;
char name[15];
}pokemon;
typedef struct legendarypokemon{
pokemon normal;
char ability[10];
}legendarypokemon;

legendarypokemon mewtwo;
strcpy(mewtwo.ability,"Pressure");
mewtwo.normal.attack=190;
mewtwo.normal.hp=231;
mewtwo.normal.speed=187;
strcpy(mewtwo.normal.name,"Mewtwo");

printf("Name:%s\n",mewtwo.normal.name);
printf("Attack:%d\n",mewtwo.normal.attack);
printf("Speed:%d\n",mewtwo.normal.speed);
printf("Hp:%d\n",mewtwo.normal.hp);
printf("Ability:%s",mewtwo.ability);
    return 0;

}