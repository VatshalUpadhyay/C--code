#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main (){
typedef struct date {
    int day;
    int month;
    int year;
}date;
date a,b;
a.day=30;
a.month=12;
a.year=2005;

b.day=30;
b.month=12;
b.year=2005;
bool flag =true;  // we cant compare like if(a=b) becz structure fully not compared 
if(a.day!=b.day) flag=false;
if(a.month!=b.month) flag=false;
if(a.year!=b.year) flag=false;
if(flag==true)
printf("The dates are equal");
else printf("The dates are different");
    return 0;
}