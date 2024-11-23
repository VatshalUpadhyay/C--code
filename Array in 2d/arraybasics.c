#include<stdio.h>
int main() { 
int r;
printf("Enter the rows: ");
scanf("%d",&r);
int c;
printf("Enter the coloumn: ");
scanf("%d",&c);
int element;
printf("Enter the element: ");

int arr[r][c];
for (int i=0;i<r;i++){ 
    for(int j=0;j<c;j++){
    scanf("%d",&arr[i][j]); //this loop for taking value for a[0,0],a[0,1]..like this until the row and coloumn condition is not fulfil.then print f after loop terminate 
}
}
printf("\n");

for (int i=0;i<r;i++){ //this loop for for printing all value which was taken
    for(int j=0;j<c;j++){
    printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}