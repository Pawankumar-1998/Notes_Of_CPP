#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[20];
    int rollNo;
    char city[20];
    cout << "Enter the name , roll number and city of the student " << endl;
    cin >> name >> rollNo >> city;
    ofstream file("marks.txt");
    file << name << "\n";
    file << rollNo << "\n";
    file << city << "\n";
    file.close();
    // from here we are going to read the file
    char st1[20], st2[20];
    int x;
    ifstream ifile("marks.txt");
    ifile >> st1;
    ifile >> x;
    ifile >> st2;
    ifile.close();
    cout << "The name of the student is " << st1 << endl;
    cout << "The roll no of the student is " << x << endl;
    cout << "The city  of the student is " << st2 << endl;
    return 0;
}