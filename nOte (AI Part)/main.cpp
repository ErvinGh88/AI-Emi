#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

//Codeblocks Specific Functions:
void gotoxy(int x, int y){
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x , y };
    SetConsoleCursorPosition( h , c );
}
void setcolor(int ForgC){
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)){
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}
void clearscreen(){
    system("cls");
}

int main()
{
    char exit='^';
    gotoxy(70,4);
    setcolor(1);
    cout<<"part of AI" <<endl;
    setcolor(178);
    gotoxy(80,5);
    cout<<" :) " <<endl;
    char note;
    note=getch();

    while(note != exit){
        cin>>note;
    }



    return 0;
}
