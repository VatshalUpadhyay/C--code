#include<stdio.h>
#include<string.h>
int main () {
char str[12]="Vatshal Ji";//size 11 becz vatshal=7+space+ji=2+/0=1='11's
printf("%s\n",str);
//3index par 'k'
for(int i=0;i>=3;i--){
str[i+1]=str[i];
}
str[3]='k';
printf("%s",str);
    return 0;
}