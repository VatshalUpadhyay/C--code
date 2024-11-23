#include<stdio.h>
void swap(int *x,int *y) { //i write here int *x i write down also where  mention it.
    int temp;
    temp = *x; //temp=2     //if you write in this forma it is also same int *x both are same 
    *x=*y; // this line mean a=9             ,                 // *x=2 //a=2
*y =temp; //*y=2 -> b=2;
return ;
}
int main () {
    int a=2;
int b= 9;
// if i write int *x=&a it also wrok in void swap
swap(&a,&b);
printf("the value of a is %d\n",a);
printf("the value of b is %d",b);
return 0;
}