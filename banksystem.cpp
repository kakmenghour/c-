#include <iostream>
using namespace std;
int main()
{

    string customerName;
    string accountName;
    float initialBalance, deposit, withdrawl;
    cout << "Enter the customer name" << endl;
    getline(cin, customerName);
    cout << "Enter the account of customer :" << endl;
    getline(cin, accountName);

    cout << "Enter the initial balance :" << endl;
    cin >> initialBalance;
    cout << "Enter the amount of deposit" << endl;
    cin >> deposit;
    cout << "Enter the amount of withdrawl :" << endl;
    cin >> withdrawl;

    double currentBalance = initialBalance + deposit - withdrawl;
    double interest = currentBalance * 0.03;
    cout << "Interest(3%) :" << interest << endl;

    double finalBalance = currentBalance + interest;
    cout << "finalBalance :" << finalBalance << endl;

    return 0;
}