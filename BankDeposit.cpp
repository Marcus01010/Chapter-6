#include <iostream>
using namespace std;

struct bank_account
{
    int account_number;
    int balance;
};

void deposit_money(bank_account &account_ref, int deposit_amount)
{
    account_ref.balance = account_ref.balance + deposit_amount;
    cout << "Balance inside function (reference): " << account_ref.balance << endl;
}

int main()
{
    bank_account account_main;
    int deposit_amount;

    cin >> account_main.account_number;
    cin >> account_main.balance;
    cin >> deposit_amount;

    cout << "Balance before call (main): " << account_main.balance << endl;

    deposit_money(account_main, deposit_amount);

    cout << "Balance after call (main): " << account_main.balance << endl;

    return 0;
}
