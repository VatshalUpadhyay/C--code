#include<stdio.h>
int main () {
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element number %d\n",i);
scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++) {
        printf("The element number is %d and the value is %d\n",i,arr[i]);
    }
    return 0;
}