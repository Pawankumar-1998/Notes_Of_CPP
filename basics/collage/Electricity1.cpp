#include <iostream>
using namespace std;
class bill
{
public:
    int units;
    float price;
};

int main()
{

    bill p1;
    cout << "Enter the units consumed " << endl;
    cin >> p1.units;

    if (p1.units < 100)
    {
        p1.price = p1.units * 5.95;
    }
    else
    {
        p1.price = p1.units * 6.95;
    }

    cout << "The amount to be paid is " << p1.price << endl;

    return 0;
}