//Allocate memory for 5 numbers.then dynamically increse it to 8
#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)calloc (5,sizeof(int));
    printf("enter the number(5): ");
    for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
}
ptr= realloc(ptr,8);
printf("enter number(8): ");
for(int i=0;i<8;i++){
    scanf("%d\n",&ptr[i]);
}
for(int i=0;i<8;i++){
printf("number %d is %d\n",i,ptr[i]);
}
return 0;
}
