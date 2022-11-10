#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("cls");
    //
    string name = "ajao";
    string st;
    // ofstream out("file1.txt");
    // out << name;
    
    ifstream in("file1.txt");
    getline(in, st);
    cout << st;

    // in >> st;
    return 0;
}
