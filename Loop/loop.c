#include<stdio.h>

int main() {
  // using do while loop
//   int i=1;
//  int sum= 0;
  // do{ sum += i;
  // i++;
  // } while(i<=10);

//Using For Loop
int sum = 0; 
for(int i=1;i<=10;i++) {
sum +=i;
}

   printf( "The sum of first 10 natrual  numbers are %d\n", sum );
  
    return 0;
}