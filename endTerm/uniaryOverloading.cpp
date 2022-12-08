#include <iostream>
using namespace std;
// using Class 
class demo
{
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << " A " << a << " B " << b << endl;
    }

    void operator-()
    {
        a = -a;
        b = -b;
    }
};

int main()
{
    demo ob(10, -20);
    ob.show();
    -ob;
    ob.show();

    return 0;
}