#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 1200;
        cout<<"enter the id of the employee " <<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"the id of the employee is " << id << endl;
    }  
};

int main(){
    system("cls"); 
    employee fb[100];
    for (int i = 0; i < 5 ; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}