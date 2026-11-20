#include <iostream>

using namespace std;

double balance= 1000;

void checkbalance()
{
    cout<< "your balance is :R"<< balance<<endl;
}
void deposit()
{
    double depositamount;
    cout<< "How much do you want to deposite?"<<endl;
    cin>>depositamount;
    balance= balance + depositamount;
    cout<<"Your balance is: R"<<balance<<endl;
}
void withdraw()
{
    double withdraw;
    cout<< "Enter withdrawal amount :"<<endl;
    cin>>withdraw;
    if(withdraw>balance)
    {
        cout<< "Insufficient funds"<<endl;
    }
    else
    {
        balance= balance -withdraw;
        cout<< "You have withdrawn: R"<<withdraw<<endl;
        cout<< "You balance is: R"<<balance<<endl;
    }
}
void send()
{
    double amount;
    int account;
    cout<< "Enter account number:"<<endl;
    cin>>account;
    cout<< "How much do you want to send?"<<endl;
    cin>>amount;

    if(amount>balance)
    {
        cout<< "Insufficient funds"<<endl;
    }
    else
    {
         balance= balance - amount;
        cout<< "You have sent :R"<<amount<<" to "<<account<<endl;
        cout<<"Your balance is: R "<<balance<<endl;
    }
}
void menu()
{
    int options;
    cout<<"*************************************************************************"<<endl;
    cout<<"                              TEEPY BANK                                 "<<endl;
    cout<<"*************************************************************************"<<endl;
    cout<< "ENTER 1 TO CHECK BALANCE"<<endl;
    cout<< "ENTER 2 TO DEPOSIT"<<endl;
    cout<< "ENTER 3 WITHDRAW"<<endl;
    cout<< "ENTER 4 SEND MONEY"<<endl;
    cin>>options;
    switch(options)
    {
    case 1:
        checkbalance();
        break;
     case 2:
        deposit();
        break;
    case 3:
        withdraw();
        break;
    case 4:
        send();
        break;
    default:
        cout<<"INVALID INPUT"<<endl;
    }
}
int main()
{
    menu();

    return 0;
}
