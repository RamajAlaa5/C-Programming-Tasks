#include<stdio.h>
#include<stdlib.h>

int numOfStudents;
// int** StudGrades[4];
// int StudNames[5];

int sum=0;

int ID;
struct Student {
int id;
char Name[3]; 
int grades[4] ;
};
struct Student FillStdData(void); 
void PrintStdData(struct Student std);
void DisplayAllStudentData(int size, struct Student * StdNames);
void FillStudentData(int size, struct Student * StdNames);
void DisplayOneStudentData(struct Student * StdNames,int id);

void ShowMenu(void);

int main(){
    
struct Student std;
struct Student* StdNames;
printf("Enter Number Of Students: ");
scanf("%d", &numOfStudents);
StdNames = (struct Student*) malloc(numOfStudents * sizeof(struct Student));



int choose;

printf("Enter Your Choice: ");
ShowMenu();
scanf("%d", &choose);
system("clear");
switch(choose){
    case 1:
        FillStudentData(numOfStudents,StdNames);
        break;
    case 2: 
        DisplayAllStudentData(numOfStudents, StdNames);
        break;
  case 3:
        printf("Enter Student ID: ");
        scanf("%d",&ID);
        DisplayOneStudentData(StdNames,ID);
          break;
case 4:
break;

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


void DisplayAllStudentData(int s, struct Student * StdNames){
for (int i=0; i<numOfStudents; i++){
    PrintStdData(StdNames[i]);
}

}

void FillStudentData(int size, struct Student * StdNames){
    for(int i=0;i<numOfStudents;i++){
            StdNames[i] = FillStdData();

    }
}

void print_student(struct Student *StdNames,int ID)
{
    
    for(int i =0 ; i <numOfStudents; i++)
    {
        if(StdNames[i].id==ID)
        {
            
           PrintStdData(StdNames[i]);
        }

    }
}

void ShowMenu(void){
 printf("1 Add");    
 printf("2 Display All");    
 printf("3 Display One "); 
printf("\n"); 
   }