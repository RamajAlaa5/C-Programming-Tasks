#include<stdio.h>
#include<stdlib.h>



int sum=0;

struct Student {
int id;
char Name[5]; 
int grades[4] ;
};
struct Student FillStdData(void); 
void PrintStdData(struct Student std);

int main(){
struct Student std;

std=FillStdData();
PrintStdData(std);

    return 0;

}


struct Student FillStdData(void){
    struct Student std;
    printf("Enter Student Id: ");
    scanf("%d",&std.id);

    printf("Enter Student Name : ");
    scanf("%s",std.Name);
    for(int i=0;i<4;i++){
    printf("Enter The Grade For Subject %d: ",i+1);
        scanf("%d",&std.grades[i]);
        sum+=std.grades[i];
    }
   
    return std;
     
}



void  PrintStdData(struct Student std){
 printf("Student ID = %d\n",std.id);
 printf("Employee Name = %s\n",std.Name); 
 printf("Employee Grades = %d\n", sum);    
     
}