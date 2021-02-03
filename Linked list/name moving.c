#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X =x;
    c.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main()
{
    int x=50;
    int y=10;
    char ch;
    gotoxy(x,y);
    printf("my name is riyad");
    getch();
    while(1)
    {
        ch=getch();
        switch(ch)
        {
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        }
        gotoxy(x,y);
        printf("my name is riyad");

    }

}
