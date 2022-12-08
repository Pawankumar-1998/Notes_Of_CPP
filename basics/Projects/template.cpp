#include<iostream>
using namespace std;
/*
template<class T>
void show(T a , T b)
{
    cout<< " the value passed are " << a << " and " << b << endl;
}

int main(){
    // int a = 10 ,  b = 20;
    char m = 'a' , b = 'n';
    show(m,b);
    return 0;
}
*/

template<class T>
class show
{
T a , b;

public:
  show(T p , T q){
    a=p;
    b=q;
 }
 void show(){
    cout<<"The value passed in the function are " << a << " and " << b  << endl; 
 }
};

int main(){
    show <int> ob(20,30);
    ob.show();
    // ob.show();
    return 0;
}
