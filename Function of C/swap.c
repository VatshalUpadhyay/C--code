#include<stdio.h>
int main() {
    int a;
    printf("Enter the a: ");
    scanf("%d", &a);
    int b;
    printf("Enter the b: ");
    scanf("%d", &b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;

}