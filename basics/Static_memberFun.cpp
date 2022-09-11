#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void);
//   this is static function they can only access the other static functions and static variable 
    static void getcount(void)
    {
        // count<<id; this will give an error because you cannot access other variable in a static function , only static functions and variable can be accesed in static function;
        cout << "The value of count is " << count << endl;
    }
};

// this is static variable . because every object shares the same count variable 
int employee ::count; // default value of count is 0; // we should initialise it outside the class once 
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
    employee::getcount(); // this is how static functions are called

    dinesh.setData();
    dinesh.getData();
    employee::getcount();

    rahul.setData();
    rahul.getData();
    employee::getcount();

    return 0;
}