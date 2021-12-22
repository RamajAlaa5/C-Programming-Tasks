
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
static struct termios old, new;

void initTermios(int echo)
{
    tcgetattr(0, &old); 
    new = old; 
    new.c_lflag &= ~ICANON; 
    new.c_lflag &= echo ? ECHO : ~ECHO;
    tcsetattr(0, TCSANOW, &new); 
}


void resetTermios(void)
{
    tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo)
{
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}


char getch(void)
{
    return getch_(0);
}

char getche(void)
{
    return getch_(1);
}
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}
  

void EditLine(char *ptr,int s){
    int x;
    char ch;
    printf("Enter your characters: ");
    for(int i=0;i<s;i++){
        ptr[i]=getche();
    }
    gotoxy(x,2);

    do
    {

    ch=getch();
   if (ch == '\033'){
       getch();
       if(ch==75) //Left Arrow Is Pressed
            {
                x--;
                if(x<1)
                {
                    x=s;
                }
                gotoxy(x,2);

            }

              if(ch==77) //Right Arrow Is Pressed
            {
                if(x==s)
                {
                    x=1;
                }
                else
                {
                    x = x + 1;
                }
                gotoxy(x,2);

            }

             if(ch==71 && x ==1)// Home Key Is Pressed
            {
                x= s;// go to the last char
                gotoxy(s,2);

            }
            else if(ch ==71 && x > 1) // End Key Is Pressed
            {
                x =1;
                gotoxy(x,2);
            }

            else if((ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z' ))
        {
            ptr[x-1]=ch;
            gotoxy(x,2);
            printf("%c",ptr[x-1]);
            gotoxy(x,2);
        }

        if(ch == 13) // Enter key Is Pressed
        {
            printf("\n ");

            for(int i=0 ; i<x ; i++)
            {

                printf("%c",ptr[i]);
            }

            gotoxy(x,2);

        }

          if(ch==8)// BACKSPCE Is Pressed
        {

            for(int i = ch-1; i <x-1; i++)
            {
                ptr[i]=ptr[i+1];

            }
            x--;
            gotoxy(1,3);
             printf("\n");
            for(int i=0; i<x; i++ )
            {
                printf("%c ",ptr[i]);
            }
        }
}
    }while(1);
}


int main()
{
    int num;
    char *ptr;
    printf("Enter Number of Characters: ");
    scanf("%d",&num);
    ptr=(char*)malloc(sizeof(char)*num);
    gotoxy(1,2);
    if(ptr){
        EditLine(ptr,num);
        free(ptr);
    }
    return 0;
    }


 