#include <iostream>
#include <iomanip>
using namsespace std;
class Bank_account
{
    string acc_hold;
    int acc_num;
    double balance;
    double withdrawl;
    double deposit;

public:
    void input()
    {
        cout << "Enter the name of account holder, account no. and bank balance :";
        cin << acc_hold << acc_nnum << balance;
    }
    void display()
    {
        cout << "\nAccount holder:" << acc_hold;
        cout << "\nAccount no. :" << acc_no;
        cout << "\nBank balance:" << balance;
    }
    void wit()
    {
    }
    void dep()
    {
    }
};