#include<stdio.h>
int main () {
    int marks[10]= {89,0,30,25,100,50,15,45,23,99};
    for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf("%d ",i);//here i use to print index of marks.
    }
    }
    return 0;
    }