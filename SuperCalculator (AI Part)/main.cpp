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

void _times(int p=1,int h=1){
    cout << p*h << endl;
}

void _division(int e=1,int f=1){
    cout << e/f << endl;
}

void _difference(int c=1,int d=1){
    cout << c-d << endl;
}

void _plus(int a=1,int b=1){
    cout << a+b << endl;
}


int main()
{
    //voroodi ha
    int i;
    char o;
    int k;
    /*char wrong_o='!';
    char wrong_o2='%';
    char wrong_o3='^';
    char wrong_o4='=';*/
    //shart ha
    const char plus_sign='+';
    const char difference_sign='-';
    const char times_sign='*';
    const char division_sign='/';

    //SHART HA
    while(true){
        //input
    setcolor(1);
    cout<<"part of AI" <<endl;
    setcolor(7);
        cout << "Enter your numbers(number then ---> . to exit):" << endl;
        cin >> i;
        cin >> o;
        if (o=='.') break;
        cin >> k;
        switch(o){
        case plus_sign:
            _plus(i,k);
        break;
        case difference_sign:
            _difference(i,k);
        break;
        case division_sign:
            _division(i,k);
        break;
        case times_sign:
            _times(i,k);
        break;
        default:
            cout << "lotfan az alamat dorost estefade konid,please enter correct charecter"<< endl;
        }
    }
    cout << "Press any key to exit.";
    getch();
    return 0;
}
