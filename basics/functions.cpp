#include<iostream>
using namespace std;

int sum(int a , int b){
        int c = a + b;
        return c;
}
void g();

int main(){
        system("cls");
        int num1 , num2;
        cout<<"Enter the first number "<<endl;
        cin>>num1;
        cout<<"Enter the second number "<<endl;
        cin>>num2;

        cout<<"The sum of the entered number is " << sum(num1,num2);
        g();
    return 0;
}

void g(){
    cout<<"Hello good morning"<<endl;
}