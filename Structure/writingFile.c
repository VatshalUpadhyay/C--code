#include<stdio.h>
int main (){
FILE*ptr= fopen("vatshal_file.txt","w"); // here i write w in place of r to create a file after run this program it create the file.
char str[]="I write the file";  //yaha se mai kuch add ya remove bhi kar skta hu file mai se 
fputs(str,ptr);
fclose(ptr);  //here i close the file
return 0;
}