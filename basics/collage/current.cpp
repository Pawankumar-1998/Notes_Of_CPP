#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    float units, price;
    cout << "Enter the units consumed " << endl;
    cin >> units;
    if (units < 100)
    {
        price = units * 5.95;
    }
    else
    {
        price = units * 6.95;
    }
    ofstream in("sample.txt");
    in << units << "\n";
    in << price << "\n";
    in.close();
    // read
    float x, x1;
    ifstream inny("sample.txt");
    inny >> x;
    inny >> x1;

    cout << "The amount to be paid is " << x1 << endl;
    return 0;
}