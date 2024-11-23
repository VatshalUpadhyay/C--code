#include<stdio.h>
#include<string.h>
int main (){
char str[40];
gets(str);
//puts(str); // only for string
//Or you use printf
puts("Your output is:"); // puts already add /n also thats why it print input in next line
puts(str);   //when you print like your outout is so we have to use to puts like i do  
    return 0;
}