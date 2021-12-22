#include<stdio.h>
#include<stdlib.h>

// int numOfStudents;
// int** StudGrades[4];
// int StudNames[5];

int sum=0;


struct Student {
int id;
char Name[3]; 
int grades[4] ;
};
struct Student FillStdData(void); 
void PrintStdData(struct Student std);

int main(){
struct Student std[3];
for(int i=0;i<3;i++){
    std[i]=FillStdData();
}

for(int i=0;i<3;i++){
PrintStdData(std[i]);}


    return 0;

}


struct Student FillStdData(void){
    struct Student std;
       printf("Enter The Id : ");
      scanf("%d",&std.id);
  
   printf("Enter The Name For Student: ");
      scanf("%s",std.Name);


  for(int j=0;j<4;j++){
   printf("Enter The Grade For Subject %d: ",j+1);
      scanf("%d",&std.grades[j]);
      sum+=std.grades[j];

}
 
   
    return std;
     
}



void  PrintStdData(struct Student std){
 printf("Student ID = %d\n",std.id);
 printf("Employee Name = %s\n",std.Name); 
 printf("Employee Grades = %d\n", sum);    
     
}