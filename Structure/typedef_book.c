#include<stdio.h>
#include<string.h>
int main (){
typedef struct book{  // now we don't need to write struct book we write Hack and it work with this also 
char name[50];
int noOfpages;
float price;
}Hack ;  // here book name change to Hack

Hack a; 
Hack b;   // now we use this for easy way
Hack c;
struct book d;  // we use this aslso after changing the name

a.noOfpages=120;
a.price=30.00;
strcpy(a.name,"Vatshal Ji"); // string ko declare karne ke sath hi initialize karna padta h to ni kar skte aur waise hoga ni isliye copy karlo

printf("%s\n",a.name);
printf("%d\n",a.noOfpages);
printf("%f\n",a.price);
// aur aise hi b and c ka hoga jo isme ni kiya h
    return 0;
}