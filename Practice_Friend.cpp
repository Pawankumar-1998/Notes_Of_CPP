#include <iostream>
using namespace std;

class complex
{
    // here a and b are private by default
    int a, b;

public:
    void setValue(int d1, int d2)
    {
        a = d1;
        b = d2;
    }
    // this is declaration
    friend complex sumComplex(complex od1, complex od2);

    void getValue()
    {
        cout << "The value entered is " << a << " + " << b << " i " << endl;
    }
};

complex sumComplex(complex od1, complex od2)
{
    complex o3;
    o3.setValue((od1.a + od2.a), (od1.b + od2.b));
    return o3;
}

int main()
{
    complex o1, o2, ans;
    o1.setValue(1, 4);
    o1.getValue();

    o2.setValue(5, 8);
    o2.getValue();

    ans = sumComplex(o1, o2);
    ans.getValue();

    return 0;
}

/* properties of friend function
1. not in the scope of class 
2. contains object as argument


*/