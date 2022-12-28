#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

//functions ->
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

char print_menu(){
    clearscreen();
    int x = 25 , y = 5;
    setcolor(15);
    gotoxy(x,y+1);
    cout << "1. who am i ?";
    gotoxy(x,y+2);
    cout << "2. how old is me ?";
    gotoxy(x,y+3);
    cout << "3. my routine. ";
    gotoxy(x,y+4);
    cout << "4. my works.";
    gotoxy(x,y+5);
    cout << "5. my parents.";
    setcolor(4);
    gotoxy(x,y+6);
    cout << "6. Exit program.";
    setcolor(15);
    gotoxy(x,y+7);
    cout << "Please select an option(1-5): ";

    char user_choice;
    user_choice = getch();
    return user_choice;


}
int main()
{
    //changers ->

    char aaa='1';
    char bbb='2';
    char ccc='3';
    char ddd='4';
    char eee='5';
    char close='6';
    char wrong_char=' ';
    char back_menu='b';

    //menu ->
    clearscreen();
    int x = 25 , y = 5;

    gotoxy(x,y);
    setcolor(1);
    cout<<"part of AI" <<endl;
    setcolor(7);

    setcolor(15);
    gotoxy(x,y+1);
    cout << "1. who am i ?";
    gotoxy(x,y+2);
    cout << "2. how old is me ?";
    gotoxy(x,y+3);
    cout << "3. my routine. ";
    gotoxy(x,y+4);
    cout << "4. my works.";
    gotoxy(x,y+5);
    cout << "5. my parents.";
    setcolor(4);
    gotoxy(x,y+6);
    cout << "6. Exit program.";
    setcolor(15);
    gotoxy(x,y+7);
    cout << "Please select an option(1-5): ";
    //____________________________________

    char user_choice;
    user_choice = getch();
    cout << user_choice;

    while(user_choice!=close){
    // wrong charecter ->
    if(user_choice==wrong_char){
            clearscreen();
            setcolor(4);
    cout << "!! Please enter correct number 1-5 !!" << endl;
            setcolor(15);
    cout << "    press 'b' to back to menu: " ;
    getch();
    if(user_choice==back_menu)
        print_menu();


    }
    //______________________________

    //first ->
    if(user_choice==aaa){
        clearscreen();
                cout << "My name is AKA.Ervin " <<"\n"<<"I was born in iran (gonbad city)" << endl;

                cout << "press 'b' to back to menu";
                setcolor(4);
                cout << "\t" << "!! NOT CAPITAL !!";
                setcolor(15);
                getch();
                if(user_choice==back_menu)
                    print_menu();

    }
    //secend ->
    if(user_choice==bbb){
            clearscreen();
                cout << "I am 13 years old"<<"\n" <<"I was born on 23th april (3 odibehesht)" <<"\n" << "in 2009 (1388)" << endl;

                cout << "press 'b' to back to menu";
                setcolor(4);
                cout << "\t" << "!! NOT CAPITAL !!";
                setcolor(15);
                getch();
                if(user_choice==back_menu)
                    print_menu();
    }
    //third ->
    if(user_choice==ccc){
                clearscreen();
                   setcolor(10);
            cout << "9:00-12:00. ";
            setcolor(15);
            cout  << "enjoy my day/play game/write some code/write ToDo list." << endl;
               setcolor(10);
            cout << "12:00-3:00. ";
            setcolor(15);
             cout  << "eat my lunch/chill out/turn on my setup." << endl;
               setcolor(10);
            cout << "3:00-5:00. ";
            setcolor(15);
             cout  << "write code/listen some music/ride bike/eat snack." << endl;
               setcolor(10);
            cout << "5:00-7:00. ";
            setcolor(15);
             cout  << "play game/chill out." << endl;
               setcolor(10);
            cout << "7:00-12:00. ";
            setcolor(15);
               cout  << "eat my dinner/take shower/watching some TV/reading some book..." << endl;

               cout << "press 'b' to back to menu";
                setcolor(4);
                cout << "\t" << "!! NOT CAPITAL !!";
                setcolor(15);
                getch();
                if(user_choice==back_menu)
                    print_menu();


    }
    //fourth ->
    if(user_choice==ddd){
            clearscreen();
            setcolor(10);
            cout << "1. ";
            setcolor(15);
                cout << "I am C++ programmer/HTML Programmer/Web dev/developer/musical artist(maybe??)" << endl;
            setcolor(10);
            cout << "2. ";
            setcolor(15);
                cout << "I was gamer too =) and i play fortnite some times in my day routine:) " << endl;
            setcolor(10);
            cout << "3. ";
            setcolor(15);
                cout << "I have earning on my programming & my games" << endl;
                cout << "   and i was start programming two year ago " << endl;
                cout << "   and i am so happy to start this seed (thanks dad) :)" << endl;
                cout << "   and now programming is the part of my life" << endl;

                cout << "press 'b' to back to menu";
                setcolor(4);
                cout << "\t" << "!! NOT CAPITAL !!";
                setcolor(15);
                getch();
                if(user_choice==back_menu)
                    print_menu();
    }
    //fiveth ->
    if(user_choice==eee){
        clearscreen();
        setcolor(10);
            cout << "1.my dad: ";
            setcolor(15);
                cout << "my dad 'amin' is a civil enngeneir / shopkeeper / ... he is 38 years old now and he has two child and he dont have any big problem :)" << endl;
            setcolor(10);
            cout << "2. my mom: ";
            setcolor(15);
                cout << "my mom 'sali(saloome)' is 35 years old and she is  liviing another city she is working in a constract oil company (not a worker in oil just computer things =)" << endl;
            setcolor(10);
            cout << "3. my brother: ";
            setcolor(15);
                cout << " 'davin' acctuly he is 8 mounth xD" << endl;

    }
    //sixth(close program) ->
    if(user_choice==close){return user_choice;}

    }

    return 0;
}
