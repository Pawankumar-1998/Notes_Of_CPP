#include <iostream>
using namespace std;

// this is call by value 
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// this is call by reference here the adress are passed 
void swapAdress(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swapping using refrence variable 
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    system("cls");
    int a = 5, b = 7;
    cout << "The value of a is " << a << " and value of b is " << b << endl;
    // swap(a, b);
    swap(a,b);
    cout << "The value of a is " << a << " and value of b is " << b << endl;
    swapAdress(&a,&b);
    cout << "The value of a is " << a << " and value of b is " << b << endl;
    swapReference(a,b);
    cout << "The value of a is " << a << " and value of b is " << b << endl;
    
    return 0;
}