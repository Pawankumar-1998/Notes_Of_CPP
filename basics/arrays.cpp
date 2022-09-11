#include <iostream>
#include<array>
using namespace std;

int main()
{

    int marks[] = {54, 23, 75, 89};
    cout << "the size of the array is " << sizeof(marks) << endl;
    cout<<marks.size();
    int mathMarks[4];
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    // New array
    mathMarks[0] = 541;
    mathMarks[1] = 654;
    mathMarks[2] = 52;
    mathMarks[3] = 89;
    // these are marks
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // pointers

    int *p = marks;
    cout << "the value of marks[0] :" << *p << endl;
    cout << "the value of marks[1] :" << *(p + 1) << endl;
    cout << "the value of marks[2] :" << *(p + 2) << endl;
    cout << "the value of marks[3] :" << *(p + 3) << endl;
    return 0;
}