#include<iostream>
using namespace std;

class complex{
    int a , b;

    public :
    void setFun(int n1 , int n2){
        a = n1 ;
        b = n2;
    }

    void printVal(){
        cout<<"here is your entered number " << a << " + " << b << " i" << endl;
    
    }

    friend complex sumFun(complex d1 , complex d2);
};


complex sumFun(complex o1 , complex o2){
    complex o3;
    o3.setFun((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main(){
    
    complex o1 , o2 , sum;
    o1.setFun(4,5);
    o1.printVal();

    o2.setFun(6,8);
    o2.printVal();

    sum = sumFun(o1,o2);
    sum.printVal();

    return 0;
}


// properties of friend function 
/*
 1. not in the scope of class 
 2. usually contains objects as argument 
 3. can be delclared in public and private of the class 
 4.  

*/