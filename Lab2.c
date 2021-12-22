#include <stdio.h>
#include <stdlib.h>

int main(){
    // int sum=0;
    // int counter=1;
    // for(;counter<=5;counter++){
    //     sum+=counter;
    // }
    // while(counter<=10){
    //     sum+=counter;
    //     counter++;
    // }

    // do{
    //     sum+=counter;
    //     counter++;
    // } while(counter<=5);
    // printf("The sum is %d ",sum);


    // int num;
    // printf("Enter the number: ");
    // scanf("%d",&num);
    // if((num%2)!=0){
    //     num*=2;
    // }
    // printf("the num is %d ", num);


    // char x='r';
    // x=getchar();
    // printf("The value is %d ",x);


int grade;
printf("Enter The Grade: ");
    scanf("%d",&grade);
if(grade<=90){
    printf("A");
}
else if (grade<=80)
{
        printf("B");

}

else if (grade<=60)
{
        printf("c");

}
else{
    printf("Failed");
}
    return 0;
}

