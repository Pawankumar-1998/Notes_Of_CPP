#include <iostream>
#include <fstream>
using namespace std;

class studnt
{
    int id;
    char name[20];

public:
    void getstu()
    {
        cout << "enter the id of the student " << endl;
        cin >> id;
        cout << "enter the name of the student " << endl;
        cin >> name;
    }

    void displayStudent()
    {
        cout << " the id of the student is " << id << endl;
        cout << " the name of the student is " << name << endl;
    }
};

int main()
{
    studnt s1;
    ofstream file;
    file.open("student.txt"); // used for opening the file
    char op;
    do
    {
        s1.getstu();
        file.write((char *)&s1, sizeof(s1));
        cout << "one data is succesfully added " << endl;
        cout << "press y/Y to add the another student data" << endl;
        cin >> op;
    } while (op == 'y' || op == 'Y');
    file.close();
    return 0;
}