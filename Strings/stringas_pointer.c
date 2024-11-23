#include<stdio.h>
#include<string.h>
int main() {
    char str[]="vatshal";
//char *ptr=&str[0];
//printf("%p\n",str);
// both are same we know if i ask adress for str it only print for first element (index 0)

char *p=str; //it point to str
*p='R'; //then change individual character
printf("%s",str);
    return 0;
}