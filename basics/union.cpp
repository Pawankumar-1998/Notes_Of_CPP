#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice;
    char car;
    float feild;
};


int main(){
        enum meal{ a , b , c};
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

    // system("cls");
    // union money p1;
    // p1.rice = 38;
    // p1.car = 'c';
    // cout<<p1.car<<endl;

    return 0;
}