#include <iostream>
using namespace std;
// using member function
class binary
{
    int a, b, c;

public:
    void read(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void show()
    {
        cout << " A " << a << " B " << b << " c " << c << endl;
    }

    binary operator+(binary ob)
    {
        binary o3;
        o3.a = a + ob.a;
        o3.b = b + ob.b;
        o3.c = c + ob.c;
        return o3;
    }
};

int main()
{
    binary o1, o2, o3;
    o1.read(1, 2, 3);
    o1.show();
    o2.read(20, 30, 40);
    o2.show();
    o3=o1.operator+(o2);
    // o3 = o1 + o2; ------------> we can call like this also
    o3.show();
    return 0;
}