#include<stdio.h>
#include<string.h>
int main (){
    typedef struct player{
    char firstname[22];
    char lastname[20];
    int age;
    int noOfmatches;
    float average;
 } player;
player arr[3];
for(int i=0;i<3;i++){
    char str[22];
    scanf("%s",arr[i].firstname);
    scanf("%s",arr[i].lastname);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].noOfmatches);
    scanf("%f",&arr[i].average);
}
for(int i=0;i<3;i++){
    printf("Name: %s %s\n",arr[i].firstname,arr[i].lastname);
    printf("Age: %d\n",arr[i].age);
    printf("Number of matches played: %d\n",arr[i].noOfmatches);
    printf("Average: %f\n",arr[i].average);
}
return 0;
}
