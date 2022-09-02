#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;
    glo = 79;
    int a = 10 , b = 14;
    float pi=3.14;
    char c='p';
    bool is_true = false;
    sum();
    // cout<<"this is 1st integr "<<a<<"\n this is 2nd integer "<<b;
    // cout<<"\nthis is the value of pi : "<<pi;
    // cout<<"\nthis is the value of p : "<<c;
    cout<<glo<<is_true;
    return 0;

}