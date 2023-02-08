#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

int main() {

    int amount = 0, choice, withdraw = 0, balance, transfer = 0, deposit = 0, fb;

    cout<<"\t\t\t--------------------------------"<<endl;
    cout<<"\t\t\t-----* Welcome to My Bank *-----"<<endl;
    cout<<"\t\t\t--------------------------------\n"<<endl;
    cout<<"\t\t\t    Create your Bank Account   \n\n"<<endl;

    string name;
    cout<< "\t\t\tEnter your name: "<<endl;
    getline(cin,name);
    cout<< "\t\t\tWelcome to My Bank "<<name<<endl;

    cout<< "\n\t\t\tEnter amount you want to deposit : "<<endl;
    cin>>amount;
    system("cls");
    do{
    cout<< "\t\t\tSelect option to perform transaction\n"<<endl;

    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 1 : Account Details"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 2 : Cash Withdrawal"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 3 : Cash Deposit"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 4 : Amount Transfer"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 5 : Mini statement"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cout<< "\t\t\tPress 6 : Logout"<<endl;
    cout<<"\t\t\t--------------------------------"<<endl;
    cin>>choice;
    Beep(900,100);
    system("cls");

    switch (choice)
    {
        case 1:
        cout<< "\t\t\tAccount Details\n"<<endl;
        cout<< "\t\t\tName of the Account Holder: "<<name<<endl;
        cout<< "\n\t\t\tAccount Balance Rs.: "<<amount<<endl;
        break;

        case 2:
        cout<< "\t\t\tEnter the amount you want to withdraw : "<<endl;
        cin>>withdraw;
        if(withdraw <= amount){
            system("cls");
            balance = amount - withdraw;
            cout<< "\t\t\twithdrawal Successful"<<endl;
            cout<< "\n\t\t\tRemaining Balance is Rs.: "<<balance<<endl;
        }else
            cout<< "\t\t\tNot enough balance"<<endl;
        break;

        case 3:
        cout<< "\t\t\tEnter the amount you want to deposit : "<<endl;
        cin>>deposit;
        balance = amount + deposit;
        cout<< "\n\t\t\tAccount Balance Rs.: "<<balance<<endl;
        break;

        case 4:
        cout<< "\t\t\tEnter the amount you want to transfer : "<<endl;
        cin>> transfer;
        if(transfer <= amount){
            system("cls");
            balance = amount - transfer;
            cout<< "\t\t\tRs. "<<transfer<<" transferred Successfully"<<endl;
            cout<< "\t\t\tRemaining Balance is Rs.: "<<balance<<endl;
        }else
            cout<< "\t\t\tNot enough balance"<<endl;
        break;

        case 5:
        cout<< "\t\t\tAccount Details\n"<<endl;
        cout<< "\t\t\tName of the Account Holder: "<<name<<endl;
        cout<< "\n\t\t\tOpening Balance Rs.: "<<amount<<endl;
        cout<< "\n\t\t\tAmount Deposited Rs.: "<<deposit<<endl;
        cout<< "\n\t\t\tAmount Withdrawn Rs.: "<<withdraw<<endl;
        cout<< "\n\t\t\tAmount transferred Rs.: "<<transfer<<endl;
        fb = amount + deposit - withdraw - transfer;
        cout<< "\n\t\t\tAccount Balance Rs.: "<<fb<<endl;
        break;

        case 6:
        cout<< "\t\t\tYou are successfully logged out"<<endl;
        cout<< "\t\t\tThank you for using My Bank application"<<endl;
        break;
    
    default:
        cout<<"invalid input\n\n" ; 
        break;
    }
    }
    while (choice !=6);
    {

    }
    
    return 0;
}
