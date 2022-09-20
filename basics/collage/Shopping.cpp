#include <iostream>
using namespace std;

void mobile();
void powerBank();
void mobAndPow();

int main()
{
    system("cls");
    // cout << "Select your choice " << endl;
    // int num;1
    int n;
    cout << "Enter your choice " << endl;
    cin >> n;

    switch (n)
    {
    case 1:
        mobile();
        break;

    case 2:
        powerBank();
        break;

    case 3:
        mobAndPow();
        break;

    default:
        cout << "Please select a valid option" << endl;
    }

    // mobile();
    // powerBank();
    // mobAndPow();
}

void mobile()
{
    int amount;
    float total = 0;
    float discount = 0;
    cout << " Enter the price of the mobile " << endl;
    cin >> amount;
    discount = amount * 0.05;
    total = amount - discount;
    cout << "You got a discount of rs " << discount << endl;
    cout << "Amount to be paid is " << total;
}

void powerBank()
{
    int amount;
    float total = 0;
    float discount = 0;
    cout << " Enter the price of the Power bank  " << endl;
    cin >> amount;
    discount = amount * 0.05;
    total = amount - discount;
    cout << "You got a discount of rs " << discount << endl;
    cout << "Amount to be paid is " << total;
}
void mobAndPow()
{
    int amount1, amount2;
    float total1 = 0;
    float discount = 0;
    cout << " Enter the price of the mobile  " << endl;
    cin >> amount1;
    cout << " Enter the price of the powerbank " << endl;
    cin >> amount2;
    total1 = amount1 + amount2;
    discount = total1 * 0.1;
    total1 = total1 - discount;
    cout << "You got a discount of rs " << discount << endl;
    cout << "Amount to be paid is " << total1;
}
