#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rollNo;
    string name;

public:
    //  default constructor
    student()
    {
        rollNo = 20;
        name = "Pawan Kumar";
    }

    // parameterized constructor
    student(int roll, string naam)
    {
        rollNo = roll;
        name = naam;
    }

    void display()
    {
        cout << "The name of the student is " << name << " and roll number is " << rollNo << endl;
    }
};

int main()
{
    student s1, s2(23, "Kumar Pawan");
    s1.display();
    s2.display();

    return 0;
}
