// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template <typename T> 
class myClass{
    T value;
    
    public:
    // constructor
    myClass(T x){
        value = x;
    }
    void show(){
        cout<<"The value of the variable is "<<value<<endl;
    }
};

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    myClass<int> ob(10);
    ob.show();

    return 0;
}