#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void get()
    {
        cin >> a;
    }
    // opetator overloading the argument should always be the object of the class
    void operator==(test t2)
    {
        if (a == t2.a)
        {
            cout << "both are equal";
        }
        else
        {
            cout << "both are not equal";
        }
    }
};

int main()
{
    test t1, t2;
    cout << "Enter the value of first object" << endl;
    t1.get();
    cout << "Enter the value of second object " << endl;
    t2.get();
    // in oprator overloading the argument should always be a object of the class ;
    // t1.compare(t2);  ---------->  this is using function 
    t1 == t2;
    return 0;
}