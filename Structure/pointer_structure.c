#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    }pokemon;
int main (){
pokemon pikachu;
//int *x= address of x like hi hai
pokemon* x=&pikachu;
printf("%p\n",x); // here print address of pikachu
// there is error when i type *x to gain address of x i think it machine problem
    return 0; 
}