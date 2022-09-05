#include <iostream>
using namespace std;

struct student
{
    // public;
    string name;
    float total, sub1, sub2, sub3;
    float percentage;
};

int main()
{
    system("cls");
    struct student s1;
    cout << "Enter your name : ";
    cin >> s1.name;
    cout << "Enter the marks of sub1" << endl;
    cin >> s1.sub1;
    cout << "Enter the marks of second subject" << endl;
    cin >> s1.sub2;
    cout << "Enter the marks of the third subject" << endl;
    cin >> s1.sub3;

    s1.total = s1.sub1 + s1.sub2 + s1.sub3;
    cout << "Your total is :" << s1.total << endl;

    s1.percentage = (s1.total / 300) * 100;
    cout << "Your percentage is : " << s1.percentage<<"%"<< endl;

    return 0;
}