#include<iostream>
using namespace std;

float interest ( int m , float i = 1.04){
  return m * i ;
}

int main(){
    system("cls");
    int money;
    cout<<" Enter the amount of money you want to deposite to check its intrest " << endl;
    cin>>money;
    cout<<"After depositing a amount of " << money << " you will recive a intrest of " << interest(money) << " in a year" <<endl;
    cout<<"For VIP account After depositing a amount of " << money << " you will recive a intrest of " << interest(money , 1.1) << " in a year" <<endl;

    return 0;

}