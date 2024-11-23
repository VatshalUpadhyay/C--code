#include<stdio.h>
#include<string.h>
int main (){
char s1[]="Vatshal the Coder";
//s2 is Shallow copy(not make different string just point the same string s1)
//char *s2=s1; 
//s1[0]='R';
//printf("%s",s2);
// Deep Copy ->
char s2[]="Vatshal the Coder";
s2[0]='M';
printf("%s\n",s1);
printf("%s\n",s2);
    return 0;
}