#include <iostream>
using namespace std;

class employee
{
public:
    float salary;

    void takeEmployee()
    {
        cout << "Enter the salary of the employees " << endl;
        cin >> salary;
        if (salary < 500)
        {
            cout << "Your salary doest not eligible for tax deduction" << endl;
        }
        cout << "the salary entered by you  is " << salary << endl;
    }
};

class d : public employee
{
public:
    // float fAmount;
    // float ans;500
    float taxAmount, finalAmount;
    void detect()
    {
        // if the salary is in the range of 500 to 5000 then 10% of tax is gonna deduct
        if (salary >= 500 && salary <= 5000)
        {
            taxAmount = salary * 0.1;
        }
        // if the salary is more than 5000 and below 10000 20% of tax gonna deduct
        else if (salary > 5000 && salary <= 10000)
        {
            taxAmount = salary * 0.2;
        }
        else
        {
            taxAmount = salary * 0.3;
        }

        finalAmount = salary - taxAmount;
    }
};

class c : public d
{
public:
    void display()
    {
        cout << "The total salary you recive after deduction of income tax is " << finalAmount << endl;
    }
};

int main()
{
    system("cls");
    c c1;
    // accesing function of base class with the object of derived class
    c1.takeEmployee();
    // accesing the function of intermidiate derived class
    c1.detect();
    c1.display();

    return 0;
}