#include <iostream>
#include <fstream>
using namespace std;
ofstream fout;
ifstream fin;
int main()
{
    fout.open("hello.txt", ios::in);
    fout << "hello" << endl;
    fout.close();
    return 0;
}