#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
    int main(){
        int a;
        printf("Enter the base: ");
        scanf("%d",&a);
        int b;
        printf("Enter power: ");
        scanf("%d",&b);
        int p=power(a,b);
       printf("%d raised to power %d is %d",a,b,p);

        return 0;

    
}