#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef  struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    }pokemon;
void change(pokemon* p){
(*p).hp=100;            //(p*). we use this for pointer of structure we also use this p->
p->attack=200;          // heree i use (->) this called arrow operator
(*p).speed=300;
strcpy((*p).name,"Raichu");
(*p).tier='S';
return;
}
int main (){
    pokemon pikachu;                 //Another way of initialising
    pikachu.hp=60;                  //pokemon pikachu={60,7-,124,'A',Pikachu}
    pikachu.attack=70;              //isse bhi hojayega par ek order mai karna hoga 
    pikachu.speed=124;  
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");

    printf("%s\n",pikachu.name);
    printf("%c\n",pikachu.tier);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack); 
    printf("%d\n",pikachu.speed);     
    

change(&pikachu);


printf("%s\n",pikachu.name);
printf("%c\n",pikachu.tier);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack); 
printf("%d\n",pikachu.speed); 

    return 0;
}