
// Gregory Kelleher 14478352

#include <iostream>
#include <string>
using namespace std; 

struct customer 
{
    int account_num;
    int balance;
    int item_tot;
    int credit_tot;
    int credit_lim;
};


int main() {

    customer customer;

    for(;;) 
    {

        cout << "Enter account number: ";
        cin >> customer.account_num;
        if (customer.account_num == -1) break;
        cout << "Enter balance: ";
        cin >> customer.balance;
        cout << "Enter total items charged: ";
        cin >> customer.item_tot;
        cout << "Enter credit total: ";
        cin >> customer.credit_tot;
        cout << "Enter credit limit: ";
        cin >> customer.credit_lim;

        int balance_new = customer.balance + customer.item_tot - customer.credit_tot;

        if (balance_new > customer.credit_lim) 
        {
            customer.balance = balance_new;
            cout << "\nDisplaying Information." << '\0';
            cout << "\nAccount Number: " << customer.account_num << '\0';
            cout << "\nCredit Limit: " << customer.credit_lim << '\0';
            cout << "\nCredit Limit exceeded" << '\0' << '\n';
        }
    }
    return 0;
}
