#include<stdio.h>
#include<string.h>
int main () {
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
pokemon arr[3]; 
arr[0].attack=100;
arr[0].hp=79;
arr[0].speed=98;
arr[0].tier='B';
strcpy(arr[0].name,"Pikachu");

arr[1].attack=140;
arr[1].hp=120;
arr[1].speed=138;
arr[1].tier='A';
strcpy(arr[1].name,"Charizard");

arr[2].attack=240;
arr[2].hp=179;
arr[2].speed=198;
arr[2].tier='S';
strcpy(arr[2].name,"Mewtwo");
for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
    printf("HP: %d\n",arr[i].hp);
    printf("Speed: %d\n",arr[i].speed);
    printf("Tier: %c\n",arr[i].tier);
}
   return 0;
}