#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void getData(int x, int y)
    {
        real = x;
        imag = y;
    }

    void printNumbers()
    {
        cout << "your number is " << real << " + " << imag << " i " << endl;
    }
    friend complex sum(complex c1, complex c2);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main()
{
    complex a, b, c;
    a.getData(1, 2);
    a.printNumbers();
    b.getData(2, 4);
    b.printNumbers();
    c = sum(a, b);
    c.printNumbers();
    return 0;
}
