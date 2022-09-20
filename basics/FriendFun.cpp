#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int c1, int c2)
    {
        a = c1;
        b = c2;
    }

    void getNumber()
    {
        cout << "the addition of " << a << " + " << b << "i" endl;
    }
};

int main()
{
    complex o1, o2, sum;
    o1.setNumber(1, 4);
    o1.getNumber();

    o2.setNumber(5, 8);
    o2.getNumber();
    return 0;
}