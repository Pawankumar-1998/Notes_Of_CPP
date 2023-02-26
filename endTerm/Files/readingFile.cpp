#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int n;
    char str[20];
    ifstream ifn;
    ifn.open("exam.txt");
    ifn >> n >> str;
    cout << n << " " << str << endl;
    ifn.close();
    return 0;
}