#include <iostream>
using namespace std;

class base
{
public:
    int a, b;
    friend int add(base obj);
};

int add(base obj)
{
    return obj.a + obj.b;
}

int main()
{
    base ob;
    ob.a = 5;
    ob.b = 3;
    cout << "The addition of the number is " << add(ob) << endl;
    return 0;
}