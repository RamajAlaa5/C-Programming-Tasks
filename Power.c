#include<stdio.h>
#include<stdlib.h>
long Power(int x, int y);
long z;
int main(){
z=Power(3,2);
printf("The Result Of the Power = %ld ",z);
    return 0;
}

long Power(int x ,int y){
    long result=1L;
    if(y!=0){
      result=x*Power(x,y-1);
    }
    return result;
}

