#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setId(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNum()
    {
        cout << "Your complex number is " << a << "+" << b << "i " << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setId(2, 3);
    c1.printNum();

    c2.setId(4, 5);
    c2.printNum();

    c3.setdataBySum(c1, c2);
    c3.printNum();
    return 0;
}