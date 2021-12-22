#include<stdio.h>
#include<stdlib.h>

int numOfStudents;
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
    
struct Student std;
struct Student* StdNames;
printf("Enter Number Of Students: ");
scanf("%d", &numOfStudents);
StdNames = (struct Student*) malloc(numOfStudents * sizeof(struct Student));
if(StdNames!=NULL){
for(int i=0;i<numOfStudents;i++){
    StdNames[i]=FillStdData();
}
for(int i=0;i<numOfStudents;i++){
    PrintStdData(StdNames[i]);
}
free(StdNames);
}

    return 0;

}


struct Student FillStdData(void){
    struct Student std;
    printf("Enter The Id : ");
      scanf("%d",&std.id);
  
   printf("Enter The Name For Student: ");
      scanf("%s",std.Name);


  for(int j=0;j<4;j++){
   printf("Enter The Grade For Subject %d : ",j+1);
      scanf("%d",&std.grades[j]);
      sum+=std.grades[j];
}

 
    return std;
     
}



void  PrintStdData(struct Student std){
 printf("Student ID = %d\n",std.id);
 printf("Student Name = %s\n",std.Name); 
 printf("Student Grades = %d\n", sum);    
     
}