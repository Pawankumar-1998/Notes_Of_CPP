#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("cls");
    /*
    string msg = " hii you are sending this message to the file ";
    ofstream obj("pawan.txt");
    obj << msg;
    */

    ifstream obj("pawan1.txt");
    string st;
    obj >> st;
    getline(obj, st);
    cout << st;
    return 0;
}