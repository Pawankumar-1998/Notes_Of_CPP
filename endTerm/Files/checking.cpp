#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream obj;
    obj.open("paper.txt");
    if (obj)
    {
        cout << "the file exists " << endl;
    }
    else
    {
        cout << "file do not exist" << endl;
    }

    return 0;
}