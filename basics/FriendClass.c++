#include<iostream>
using namespace std;

class complex{
int a , b;
public:
// functions for setting the value 
    void setValue(int a1, int b1){
        a = a1;
        b = b1;
    }

    void printValue(){
        cout<<"the value entered by you is " << a << " + " << b << " i " << endl;
    }
};


int main(){
    complex o1 , o2 ;
    o1.setValue(1,4);
    o1.printValue();

    o2.setValue(5,6);
    o2.printValue();
    return 0;
}