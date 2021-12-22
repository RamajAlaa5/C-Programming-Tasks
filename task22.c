#include <stdio.h> 
 #include <math.h>
int main(){ 
int sum=0;
int num;
printf("enter number: ");
scanf("%d",&num);

for(int counter=1;counter<num;counter++){
    sum+=num;
    while(sum<=100){
      printf("enter number: ");
      scanf("%d",&num);  
    }
}
printf("sum =%d", sum);
return 0; 
} 

