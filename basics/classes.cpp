#include<iostream>
using namespace std;

class employee{
    private :
    int a , b , c ;
    public :
    int d , e ;
    void setData (int a1 , int b1 , int c1); // this is declaration 
    void getData (){
        cout<<"the value of a is " << a << endl;
        cout<<"the value of b is " << b << endl;
        cout<<"the value of c is " << c << endl;
        cout<<"the value of d is " << d << endl;
        cout<<"the value of e is " << e << endl;
    }
};

void employee :: setData(int a2 , int b2 , int c2){
    a = a2;
    b = b2;
    c = c2;
}

int main(){
    system("cls");
    employee pawan;
    // pawan.a = 51; this will throw an error because this private
    pawan.d = 45;
    pawan.e = 96;
    pawan.setData(2,3,4);
    pawan.getData();
    return 0;
}