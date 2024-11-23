#include<stdio.h>
#include<string.h>
int main () {
char str[15];
puts("Enter the string:");
gets(str);
puts("The Size is:");

int size=0;
int i =0;
while(str[i]!='\0'){
    size ++;
    i++;
}
printf("%d",size);

    return 0;
}