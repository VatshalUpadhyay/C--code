#include<stdio.h>
int main (){
FILE*ptr= fopen("vatshal.txt","r");
char str[100];
while (fgets (str,100,ptr)!=NULL)   // if i use (if) in place of while it only print 1 line.
printf("%s",str);
    return 0;

}