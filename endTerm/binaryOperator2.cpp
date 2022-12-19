#include <iostream>
using namespace std;

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
        cout << "A " << a << " B " << b << " C " << c << endl;
    }

    friend binary operator+(binary o1, binary o2);
    // {
    //     binary o3;
    //     o3.a = o1.a + o2.a;
    //     o3.b = o1.b + o2.b;
    //     o3.c = o1.c + o2.c;
    //     return o3;
    // }
};
binary operator+(binary o1, binary o2)
{
    binary o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    o3.c = o1.c + o2.c;
    return o3;
}

int main()
{
    binary a1, b1, c1;
    a1.read(1, 2, 3);
    a1.show();
    b1.read(10, 20, 30);
    b1.show();
    c1 = operator+(a1, b1);
    c1.show();

    return 0;
}