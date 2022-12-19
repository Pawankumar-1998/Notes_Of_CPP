// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
// template <typename T> 
class student{
    int id;
    string name;
    
    public:
    // constructor
    student(int x , string y){
        id = x;
        name = y;
        // amount = y;
        cout<<"Id created with number "<<id<<" with student name "<<name<<endl;
    }
    // destructor
    ~student(){
        cout<<"deleting previous data"<<endl;
    }
   
};

int main() {
    student ob(12,"pawan");
    {
        student ob1(8 ,"dinesh");
    }
    // ~student;

    return 0;
}