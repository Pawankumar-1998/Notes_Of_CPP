#include<iostream>
using namespace std;

int sum(int a , int b , int c){
    cout<<"Using 3 variable " << endl;
    return a + b + c ;
}

int sum(int a , int b){
    cout<<"Using 2 variable " << endl;
    return a + b;
}

int main(){
    system("cls");
  cout<<"sum of 2 + 3 is " << sum(2,3);
  cout<<"sum of 2 + 3 + 5 is " << sum(2 , 3 , 5);
  return 0;
}