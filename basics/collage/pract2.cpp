#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    float sub[5], rollNo, percentage, total = 0;
    // char grade;
    cout << "Enter the name of the student" << endl;
    cin >> name;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter the marks of subject " << i << endl;
        cin >> sub[i];
        total = total + sub[i];
    }
    // cout << total;
    percentage = (total / 600) * 100;
    cout << percentage << endl;

    ofstream file("sample.txt");
    file << name << "\n";
    file << total << "\n";
    file << percentage << "\n";
    file.close();
    // from here we are going to read the file
    string st;
    float x, x1;
    ifstream ifile("sample.txt");
    ifile >> st;
    ifile >> x;
    ifile >> x1;
    ifile.close();
    cout << "The name of the student is " << st << endl;
    cout << "The total of the student is " << x << endl;
    cout << "The percentage of the student is " << x1 << endl;
    return 0;
}