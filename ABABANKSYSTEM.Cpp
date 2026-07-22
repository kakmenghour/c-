#include <iostream>
using namespace std;
int main()
{

    int account_tyypee, transaction_type;
    double amount, balance;
    // step one input
    cout << "Enter the type of account(1.Savings,2.Payroll,3.Business)" << endl;
    cin >> account_tyypee;
    cout << "Enter the current balance (riel) " << endl;
    cin >> balance;
    cout << "Enter the Transaction (1.Deposit , 2. Withdrawl , 3. Tranfer)" << endl;
    cin >> transaction_type;
    cout << "Enter the amount(riel)" << endl;
    cin >> amount;

    // const for rules
    const double Withdrawl_FEE = 4000;
    const double Tranfer_FEE = 2000;
    // condition
    if ((account_tyypee < 1 || account_tyypee > 3) || (transaction_type < 1 || transaction_type > 3) || balance < 0 || amount <= 0)
    {
        cout << "Transaction stauts -> Rejected (Invalid input)" << endl;
    }
    // Determine minimum balance rule based on account type
    else
    {
        double min_balance;

        if (account_tyypee == 1)
        {
            min_balance = 40000; // savings
        }
        else if (account_tyypee == 2)
        {
            min_balance = 20000; // payroll
        }
        else
        {
            min_balance = 200000;
        }

        bool is_approved = true;
        double final_balance = balance;

        if (transaction_type == 1)
        {
            final_balance = amount + balance;
        }
        else if (transaction_type == 2)
        {

            double total_Deduction = amount + Withdrawl_FEE;

            // nested if the account is specific rule
            if (account_tyypee == 2 && amount > 1000000)
            {
                cout << "Error: payroll can't withdrawl more than 1,000,000" << endl;
                is_approved = false;
            }

            else if (balance - total_Deduction < min_balance)
            {
                cout << "Error: Insufficient funds to maintain minimum balance of " << min_balance << " riel." << endl;
                is_approved = false;
            }
            else
            {
                final_balance = balance - total_Deduction;
            }
        }
        else if (transaction_type == 3)
        {
            double total_Deduction = amount + Tranfer_FEE;
            if (account_tyypee == 1 && amount > 2000000)
            {
                cout << "Error: payroll can't withdrawl more than 1000000" << endl;
            }
            else if (balance - total_Deduction < min_balance)
            {
                cout << "Error: Insufficient funds to maintain minimum balance of " << min_balance << " riel." << endl;
            }
            else
            {

                final_balance = balance - total_Deduction;
            }
        }
        if (is_approved)
        {
            cout << "\nTransaction Status -> Approved " << endl;
            cout << "Final Balance :" << final_balance << endl;
        }
        else
        {
            cout << "The transaction  Status -> Denied  " << endl;
        }
    }

    return 0;
}