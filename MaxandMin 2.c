#include<stdio.h>
#include<stdlib.h>
int num[5];
int max,min;

int main(){


for(int i=0;i<5;i++){
    printf("Enter The Array Elements: ");
    scanf("%d",&num[i]);
}

for (int i = 0; i < 5; i++)
{
    printf("Element[%d]=[%d] \n",i,num[i]);
}
printf("\n");
max=num[0];
min=num[0];
for(int i=0;i<5;i++){
if(num[i]<min){
    min=num[i];
}
if(num[i]>max){
    max=num[i];
}
}
printf("The MAX = %d  The MIN= %d ",max,min);
    return 0;
}


