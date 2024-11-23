#include<stdio.h>
#include<string.h>
int main () {
char s1[11]="Vatshal"; //here we have to write size of total linw that will print after run like s1+s2  7+4 (Vatshal + Ji)
char s2[3]="ji";
strcat(s1,s2);
printf("%s",s1);
    return 0;
}