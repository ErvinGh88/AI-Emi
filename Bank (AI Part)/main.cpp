#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

bool AccountCreated = false;
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
//Class
class BankAccount{
private:
    long int balance = 0;
    string owner;
    long int creation_time;
public:
    void create_account(string new_owner){
        owner = new_owner;
        creation_time = time(0);
    }
    void deposit(unsigned int amount){balance+=amount;}
    bool withdraw(unsigned int amount){
        if (amount > balance) return false;
        balance-=amount;
        return true;
    }
    void print_status(){
        cout << "Account Owner: " << owner;
        cout << " | Creation time: " << creation_time <<  endl;
        cout << "Balance= " << balance << endl;
    }

};
//Functions
char print_menu(){
    clearscreen();
    int x = 25 , y = 5;
    const int enabaled_color = 15;
    const int disabled_color = 8;
    if (!AccountCreated) setcolor(enabaled_color);
    else setcolor(disabled_color);
    gotoxy(15,y);
    setcolor(1);
        cout<<"part of AI" <<endl;
    setcolor(7);
    gotoxy(x,y+1);
    cout << "1. Create account.";
    if (AccountCreated) setcolor(enabaled_color);
    else setcolor(disabled_color);
    gotoxy(x,y+2);
    cout << "2. Withdraw";
    gotoxy(x,y+3);
    cout << "3. Deposit";
    gotoxy(x,y+4);
    cout << "4. Print Account Status.";
    setcolor(15);
    gotoxy(x,y+5);
    setcolor(4);
    cout << "5. Exit program.";
    setcolor(7);
    gotoxy(x,y+7);
    cout << "Please select an option: ";
    char user_choice;
    user_choice = getch();
    cout << user_choice;
    return user_choice;
}

int main(){
    BankAccount acc;
    char user_choice = '0';
    while(user_choice != '5'){
        user_choice = print_menu();
            switch(user_choice){
            case '1':
                if (!AccountCreated){
                    clearscreen();
                    cout << "Please enter owner name: ";
                    string owner_name;
                    cin >> owner_name;
                    acc.create_account(owner_name);
                    AccountCreated = true;
                }
                break;
            case '2':
                if (AccountCreated){
                    clearscreen();
                    cout << "Please enter amount of withdrawal: ";
                    int amount;
                    cin >> amount;
                    if(!acc.withdraw(amount)){
                        cout << "Not enough balance." << endl;
                        cout << "Press any key to continue.";
                        getch();
                    } else {
                        cout << "Withdrawal successful." << endl;
                        acc.print_status();
                        cout << "Press any key to continue.";
                        getch();
                    }
                }
                break;
            case '3':
                if (AccountCreated){
                    clearscreen();
                    cout << "Please enter amount to deposit: ";
                    int amount;
                    cin >> amount;
                    acc.deposit(amount);
                    cout << "Deposit successful." << endl;
                    acc.print_status();
                    cout << "Press any key to continue.";
                    getch();
                }
                break;
            case '4':
                if (AccountCreated){
                    clearscreen();
                    acc.print_status();
                    cout << "Press any key to continue.";
                    getch();
                }
                break;
            }
        }
    return 0;
}
