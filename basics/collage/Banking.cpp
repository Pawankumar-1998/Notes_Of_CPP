#include <iostream>
using namespace std;

int deposit(int minBal);
int withDrawl(int total);
void veiwBalance(int total);

int main()
{
    system("cls");
    int minBal = 1000;
    int total = 0;
    int newTotal;
    int num;
    cout << "Enter 1 to deposite \n"
            " Enter 2 to withdrawal \n"
            " Enter 3 to checkBalance"
         << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        // deposit(minBal);
        total = deposit(minBal);
        cout << "your total amount is " << total << endl;
        // main();
    case 2:
        total;
        //  deposit(minBal);
        newTotal = withDrawl(total);
        // newTotal = withDrawl(total);
        cout << "Your current balance is " << newTotal << endl;
        break;
    case 3:
        veiwBalance(total);
        break;
    default:
        cout << " Please enter a valid input" << endl;
        break;
    }
    /*
    cout << "your remaining balance is " << withDrawl(total);
    veiwBalance(withDrawl(total));

    */

    return 0;
}

int deposit(int bal)
{
    int credit;
    cout << "Enter the amount you want to deposit" << endl;
    cin >> credit;
    bal = bal + credit;
    return bal;
}

int withDrawl(int total)
{
    int debit;
    cout << "Enter the amount you want to withdraw" << endl;
    cin >> debit;
    // total=total-debit;
    if (total - debit < 1000)
    {
        cout << "You cannot withdrawn these amout due to minium balance to be maintainted" << endl;
    }
    else
    {
        total = total - debit;
    }

    return total;
}

void veiwBalance(int total)
{
    cout << "Your Availabe balance is " << total << endl;
}