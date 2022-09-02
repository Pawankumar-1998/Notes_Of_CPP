#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    /*
    char c ='c';
    cout<<"The value is " << c<<endl;
    c = '4';
    cout<<"The value of c is " << c ;
    //  Constanst in c++
    const int a = 3; // constant means we cannot further modify the value 
    cout<<"the value of a is " << a;
    */
   /* Manipulators is c++
   int a = 4 , b = 10 , c = 1220;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
//  using iomanip header file

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    */

//    operator precedence 
        int a = 3 , b = 4;
        int c = ((((a*5) + b) - 54) + 78);
        cout<<" the value of c is " << c << endl; 
        
    return 0;
}
