#include <iostream>
using namespace std;

int main()
{
    float units;
    float price = 0;
    cout << "Enter the units consumed" << endl;
    cin >> units;
    /*

    if (units < 100)
    {
        price = units * 5.95;
    }
    else
    {
        price = units * 6.95;
    }
    
    */

    if (units > 0 && units <= 100)
    {
        price = units * 5.95;
    }
    else if (units > 100)
    {
        price = 100 * 5.95 + (units - 100) * 6.95;
    }

    cout << "The price to be paid is " << price << endl;

    return 0;
}