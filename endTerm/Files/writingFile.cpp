#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int num;
    string name;
    ofstream of;
    ifstream iff;
    of.open("exam.txt");
    cout << "Enter the role number and name of the student" << endl;
    cin >> num >> name;
    of << num << name;
    of.close();
    // reading
    iff.open("exam.txt");
    iff >> num >> name;
    cout << num << " " << name;
    iff.close();

    return 0;
}