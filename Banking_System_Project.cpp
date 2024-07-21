#include <iostream>
#include <string.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

class bank
{
    char name[100],address[100],y;
    int balance;
    public:
        void Open_account();
        void Deposit_Money();
        void Withdraw_Money();
        void Display_Account();
};

void bank:: Open_account()
{
    cout <<"Enter your full name: ";
    cin.getline(name,100);
    cin.ignore();
    cin >> name;
    cout <<"Enter your Address: ";
     cin.getline(address,100);
    cin.ignore();
    cin >> address;
    cout <<"What type of account you want to open saving (s) or current(c): ";
    cin >> y;
    cout <<"Enter your amount for deposit:  " ;
    cin >> balance;
    cout <<endl << "\nYOur Account is created  !!!  ";
   
}
 void bank ::Deposit_Money()
 {
    int a;
    cout <<"Enter How Much you deposite : ";
    cin >> a;
    balance += a;
    cout <<"Your Total Amount you deposited : " << balance ;

 }

 void bank:: Display_Account()
 {
    cout <<"Enter Your Full Name: \t"<<name <<endl ;
    cout <<"Your Address: \t" << address <<endl;
    cout <<"Type of Account That You Open: \t" <<y <<endl;
    cout <<"Amount you deposite: \t" << balance <<endl;
 }

 void bank ::  Withdraw_Money()
 {
        int amount;
        cout <<"\n !!!   WITHDRAW AMOUNT   !!! ";
        cout << "Enter Amount to Withdraw:  \t" ;
        cin >> amount;
        balance-= amount;
        cout <<"Updated Total Amount Left In Your Account: \t" << balance <<endl;
 }

int main()
{
    int ch;
    char x;
    bank obj;
    do
    {
        cout <<"1) Open Account " <<endl;
        cout <<"2) Deposite Money " <<endl ;
        cout <<"3) Withdraw Money " <<endl;
        cout <<"4) Display Account "<<endl;
        cout <<"5) Exit() \n";
        cout << "Select the Option From the above: ";
        cin >> ch;
        switch(ch)
        {
            case 1: 
            cout <<"1) Open Account \n";
            obj.Open_account();
            break;
            case 2:
                cout <<"2) Deposite Money \n";
                obj.Deposit_Money();
                break;
            case 3:
                cout <<"3) Withdraw Money\n";
                obj.Withdraw_Money();
                break;
            case 4:
                cout <<"4) Display Money \n";
                obj.Display_Account();
                break;
            case 5:
                 if (ch==5)
                    {
                        exit (1);
                    }
            default:
                cout <<"THis is not Exist try again: ";
        }
        cout <<"\nDo you want to Select Next Option Then Press: y or Y\n";
        cout <<"\nIf You want to exit then Press: N or n: ";
        x = getch();
            if (x=='n' || x=='N')
            {
                exit(0);
            }
        
    }

     while (x=='y' || x=='Y');


getch();

    

    return 0;
}