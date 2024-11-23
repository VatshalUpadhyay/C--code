#include<stdio.h>
#include<string.h>
int main (){
struct book{
char name[50];
int noOfpages;
float price;
} a,b,c; // anaother way of decleare the structure
a.noOfpages=120;
a.price=30.00;
strcpy(a.name,"Vatshal Ji"); // string ko declare karne ke sath hi initialize karna padta h to ni kar skte aur waise hoga ni isliye copy karlo

printf("%s\n",a.name);
printf("%d\n",a.noOfpages);
printf("%f\n",a.price);
// aur aise hi b and c ka hoga jo isme ni kiya h
    return 0;
}