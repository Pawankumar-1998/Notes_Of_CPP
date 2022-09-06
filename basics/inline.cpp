#include<iostream>
using namespace std;

  inline int product(int a , int b){
    // static int c = 0; // this will only execute once
    // c = c + 1; 
    // return a * b + c;
    return a * b ;
}

int main(){
    system("cls");
    int a , b;
    cout<<"enter the value of two numbers"<<endl;
    cin>>a>>b;
    cout<<"the product of the two number is : "<<product(a,b)<<endl;
    cout<<"the product of the two number is : "<<product(a,b)<<endl;
    return 0;
}