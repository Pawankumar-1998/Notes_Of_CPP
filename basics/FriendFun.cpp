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

    friend complex sumComplex(complex d1 , complex d2);

    void getNumber()
    {
        cout << "the addition of " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex ( complex o1 , complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main()
{
    complex o1, o2, sum;
    o1.setNumber(1, 4);
    o1.getNumber();

    o2.setNumber(5, 8);
    o2.getNumber();

    sum = sumComplex(o1,o2);
    sum.getNumber();

    return 0;
}