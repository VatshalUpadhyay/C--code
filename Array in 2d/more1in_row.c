#include<stdio.h>
int main ()  { 
    int arr[3][4]={{1,0,0,1},{0,1,0,1},{1,1,1,1}};
    int maxcount=0;
    int maxindex=0;

for (int i=0;i<3;i++){ 
    int count=0;
    for(int j=0;j<4;j++){       
        if(arr[i][j]==1) count++; //if value of any array is 1 then count it 
    }
  if(maxcount<count){
    maxcount=count;
    maxindex=i;
  }

}
printf("the row in which more 1 is: %d",maxindex);

return 0;
}