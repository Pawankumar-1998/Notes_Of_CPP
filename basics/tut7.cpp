#include <iostream>
using namespace std;

int c = 45;

int main()
{
    // int a,b,c;
    // cout<<"enter the value of a " ;
    // cin>>a;
    // cout<<"enter the value of b ";
    // cin>>b;
    //  c=a+b;
    // cout<<"the addition of a and b is "<<c<<endl;
    // cout<<"this is global variable "<<::c;

    // float d = 34.4f;
    // long double e = 34.4;
    // cout << "the value of d is " << d << endl;
    // cout<< "the value of e is " << e<<endl;

    /*

    // printing the value of float
    cout<<"the size of 34.4"<<34.4<<endl;
    cout<<"the size of 34.4f"<<34.4f<<endl;
    cout<<"the size of 34.4F"<<34.4F<<endl;
    cout<<"the size of 34.4l"<<34.4l<<endl;
    cout<<"the size of 34.4L"<<34.4L<<endl;

         */

    //**** Referance variable ***************//
    float x = 45;
    float &y = x;
    cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y;

    // ******* Type Casting ********** //
    float a = 45.5;
    int b = 45;
    int c = 5;
    cout << "The value of a is " << (int)a << endl;
    cout << "The value of b is " << (float)b << endl;

    
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a + b is " << int(a) + b << endl;
    cout << "The value of a + b is " << int(a) + b << endl;

    return 0;
}