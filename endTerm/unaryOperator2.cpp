#include <iostream>
using namespace std;
// using friend function
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

 friend void operator -(demo &ob);
};
void operator -(demo &ob){
    ob.a = -ob.a;
    ob.b = -ob.b;
 }


int main()
{
    demo ob(10, -20);
    ob.show();
    -ob;
    ob.show();

    return 0;
}