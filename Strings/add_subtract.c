//standar input output library
#include<stdio.h>

int add(int a, int b) {
    return a + b;  
}

int subtract(int a, int b) {
    return a - b;
}
int multiple(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiple(num1, num2));
     printf("Divide: %d\n", divide(num1, num2));
    return 0;
}