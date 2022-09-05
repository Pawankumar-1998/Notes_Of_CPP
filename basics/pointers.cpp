#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* b = &a;
    // & ------  Adress of the operators
    // * -------- Stores the value at the adress
    system("cls");
    cout<<b<<endl;
    cout<<"The adress of a is " <<&a<< endl;

    // defrence operator
    cout<<"The value of b is " <<*b<< endl;

    int** c = &b;
    cout<<"The adress of b is "<<&b<<endl;
    cout<<"The adress of b is "<<c<<endl;
    cout<<"The value at adress of c is"<<*c<<endl;
    cout<<"The value at adress value_at(value_at(c)) is " << **c<<endl; 
    return 0;
}
