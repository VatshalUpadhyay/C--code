#include<stdio.h>
#include<string.h>
int main () {
char s1[11]="Vatshal Ji";
char s2[11];
strcpy(s2,s1);
s2[0]='A';// here i check that it is shallow copy not deep and change the first character
printf("%s",s2);
    return 0;
}