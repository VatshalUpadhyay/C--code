#include<stdio.h>
int main () {
int a=25;
int* x=&a;
int** y=&x;

printf("%d\n",*x);

printf("%d",**y);
return 0;
}