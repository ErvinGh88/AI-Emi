#include <iostream>
#include <cstdlib>
#include <ctime>
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

    char aaa='1';
    char bbb='2';

setcolor(1);
cout<<"part of AI" <<endl;
setcolor(7);

    cout <<"Wellcome to number game:)" <<endl;
    cout <<"    " <<endl;
    cout <<"please select your lang -> " <<endl;
    cout <<"1. Persian "<<endl;
    cout <<"2. English "<<endl;
    cout <<"lang: ";
    char user_choice;
    user_choice=getch();
    cout << user_choice <<endl;
    if(user_choice==aaa){

            clearscreen();
         // random number
     srand(time(0));
    int number = 1 + (rand() % 100);

    // first view
    int hads=0;

    int i=1;


                         cout <<"___________________" << "..NUMBER GAME.." << "_________________" <<endl;
            cout << "baray khooroj az barname adad 0 ra feshar dahid." << endl;
            cout << "___________________________________________________" << endl;

    // process

    do{
        cout << "yek adad ra hads bezanid (zir 100ta): ";
        cin>>hads;
        if (number>hads) {
            cout << "adad man bozorg tar ast!" << endl;
        }
        if (number<hads) {
            cout << "adad man koochak tar ast!" << endl;
        }
        if (number==hads) {
                cout << "  " <<endl;
            cout << "___________________" << "..SHOMA BARANDE SHODID.." << "___________________" << endl;
            cout<<"                         / VICTORY \\                 "<<endl;
            hads=0;
        }
        i++;

        // number of try(from teacher's file)
    }while(hads!=0);
    cout << "  " <<endl;
    cout << "  " <<endl;
    cout<<"shoma "<<i<<" bar hads zadid :)";
    cout << "  " <<endl;

    }
    else if(user_choice==bbb){
        clearscreen();
        srand(time(0));
    int num = 1 + (rand() % 100);

    int guess=0;
    int it=1;
    do{
        cout<<"Guess what?(under 100)(0 to exit)";
        cin>>guess;
        if (num>guess) {
            cout<<"My number is bigger"<<endl;
        }
        if (num<guess) {
            cout<<"My number is smaller"<<endl;
        }
        if (num==guess) {
            cout<<"Winner Winner Chicken Dinner"<<endl;
            guess=0;
        }
        it++;
    }while(guess!=0);
    cout<<"You tried "<<it<<" time(s).";
    }

    return 0;
}
