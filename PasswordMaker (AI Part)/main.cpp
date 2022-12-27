#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

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
    char aaa='1';
    char bbb='2';
    char ccc='3';
    int yello=246;
    int white=7;
    int blue=1;

    gotoxy(65,4);
    setcolo(blue);
        cout<<"part of AI" <<endl;
    gotoxy(65,5);
    setcolor(yello);
    cout <<"_______Hello this is password maker :)_______" << endl;
    setcolor(white);
    gotoxy(65,7);
    cout <<" how you want your password be? " << endl;
    gotoxy(65,8);
    cout <<" 1. EZ " << endl;
    gotoxy(65,9);
    cout <<" 2. Medium " <<endl;
    gotoxy(65,10);
    cout <<" 3. Hard " <<endl;
    gotoxy(65,11);
    cout << " choose 1-3: ";
    char user_choice;
    user_choice=getch();
    cout<< user_choice <<endl;
    if(user_choice==aaa){
        clearscreen();
        gotoxy(65,8);
        setcolor(yello);
        cout<< "Easy Passwords ->";
        setcolor(white);
        gotoxy(65,10);
    cout << "1234" <<endl;
    gotoxy(65,11);
    cout << "abcd" <<endl;
    gotoxy(65,12);
    cout << "1a2b3c4d" <<endl;
    }
    if(user_choice==bbb){
        clearscreen();
        gotoxy(65,8);
        setcolor(yello);
        cout<< "Medium Password ->";
        setcolor(white);
        gotoxy(65,10);
    cout << "M112233445566m" <<endl;
    gotoxy(65,11);
    cout << "A88A87A@" <<endl;
    gotoxy(65,12);
    cout << "1234/abcd.name_LastName" <<endl;
    }
    if(user_choice==ccc){
        clearscreen();
        gotoxy(65,8);
        setcolor(yello);
        cout << "Hard Password ->";
        setcolor(white);
        gotoxy(65,10);
    cout << "Name!LastName@LastName!Name" <<endl;
    gotoxy(65,11);
    cout << "erghvireinshi,1388@2009" <<endl;
    gotoxy(65,12);
    cout << "565656NAME565656LASTNAME565656" <<endl;
    }




    return 0;
}
