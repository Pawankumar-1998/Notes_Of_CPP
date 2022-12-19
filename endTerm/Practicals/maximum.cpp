#include <iostream>

using namespace std;

class A
{
    // Data members of class A
    int a;

public:
    // Constructor to initialize the data member of class A
    A(int x)
    {
        a = x;
    }

    // Friend function of class B
    friend int findMax(A, B);
};

// Declare class B before using it in the definition of findMax()
class B
{
    // Data members of class B
    int b;

public:
    // Constructor to initialize the data member of class B
    B(int y)
    {
        b = y;
    }

    // Friend function of class A
    friend int findMax(A, B);
};

// Function to find the maximum of the data members of class A and class B
int findMax(A obj1, B obj2)
{
    // Return the maximum of the data members of class A and class B
    return (obj1.a > obj2.b) ? obj1.a : obj2.b;
}

int main()
{
    // Create objects of class A and class B
    A obj1(10);
    B obj2(20);

    // Find the maximum of the data members of class A and class B
    cout << "The maximum of the data members of class A and class B is: " << findMax(obj1, obj2) << endl;

    return 0;
}
