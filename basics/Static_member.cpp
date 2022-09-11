#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void);
};

int employee ::count; // default value of count is 0;
void employee::setData(void)
{
    cout << "Enter the employee id number " << endl;
    cin >> id;
    count++;
}

void employee ::getData(void)
{
    cout << "Id number of the employee is " << id << " Employee no is " << count << endl;
}

int main()
{
    system("cls");
    employee pawan, dinesh, rahul;

    pawan.setData();
    pawan.getData();

    dinesh.setData();
    dinesh.getData();

    rahul.setData();
    rahul.getData();

    return 0;
}