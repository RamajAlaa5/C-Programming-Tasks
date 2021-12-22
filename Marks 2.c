#include<stdio.h>
#include<stdlib.h>
int std[3][4];
int row,col;
int counter=0;
float StdGardes=0;
float subjectAverage=0;
int grade[3][4];
int main(){
for(row=0;row<4;row++){
 printf("Enter The Grade For Student %d: ",row+1);
    for( col=0;col<3;col++){
      scanf("%d",&std[row][col]);
    //   std[row][col]=grade[row][col];
      }
      
   }
printf("\n");
for(row=0;row<3;row++){
    for( col=0;col<4;col++){
        StdGardes+=std[row][col];
      }
      subjectAverage=StdGardes/4;
      printf("The Sum Of Grades For Student %d =%f \n",row+1,StdGardes);
      printf("The Average Of Subjects' Grades For Student %d =%f \n",row+1,subjectAverage);
      StdGardes=0;

   }

 
    return 0;
}


