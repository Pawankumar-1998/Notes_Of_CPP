#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("pawan.txt");
    if (!file.is_open())
    {
        cout << "Error opening the file" << endl;
        return 1;
    }

    int count = 0;
    char c;
    while (file >> c)
    {
        count++;
    }
    file.close();
    cout << "the total numbers of charecter are " << count << endl;
    return 0;
}