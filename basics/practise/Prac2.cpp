#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float salary, hr, da, finalSalary;
    cout << "Enter the salary of the salary of the employee " << endl;
    cin >> salary;
    hr = salary * 0.05f;
    da = salary * 0.05f;
    cout << "The HR  of the entered salary is " << hr << endl;
    finalSalary = salary + hr + da;
    cout << "The salary after adding  hr and da is " << finalSalary << endl;
    if (finalSalary > 500000)
    {
        finalSalary = finalSalary - (finalSalary * 0.2f);
    }
    else
    {
        cout << "Your salary is below 5 lakhs so income tax wont be deducted";
    }

    cout << "The inhand salary you get is " << finalSalary;
    ofstream outf("file1.txt");
    outf << salary << "\n";
    outf << hr << "\n";
    outf << da << "\n";
    outf << finalSalary << "\n";
    outf.close();

    /*
    student obj;
    ofstream inf;
    float a, b, c;
    // diba.open("file1.txt");
    obj.getDetails();
    diba.write((char *)&obj, sizeof(obj));
    diba.close();
    return 0;
    */
}