#include<stdio.h>

int main() {
int i=1;
int product=1 ;
int n;
printf("Enter the value on: ");
scanf("%d",&n);
while(i<=n) {
    product *= i;
    i++;
}
printf("factorial os n is %d\n",product,n);
    return 0;
}