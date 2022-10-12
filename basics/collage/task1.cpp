#include <iostream>
using namespace std;

class student
{
public:
    string name;
    // char name[20];

    void getName()
    {

        cout << "The name entered is " << name << endl;
    }
};

int main()
{
    system("cls");
    student s1;
    // char n[20];
    s1.name = 'pawan';
    s1.getName();

    return 0;
}