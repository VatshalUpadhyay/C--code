#include<stdio.h>
typedef int* pointer;
int main (){
    int x=5,y=6;
  //  int *a=&x, b=&y;  // this give you error becz it is not same as we do like above so we use typedef
 pointer a=&x,b=&y;
printf("%p\n",a);
printf("%p\n",b);
    return 0;
}