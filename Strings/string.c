#include<stdio.h>
int main () {
// char arr[]="Hello";    option 1
 int i =0;
//while(i<5){             
  //  printf("%c",arr[i]);
  //  i++;
//}
char arr[]="Vatshal the coder\0";  //option 2   /0 is null character
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
    return 0;
}