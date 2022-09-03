#include <iostream>
using namespace std;
// system("cls");

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you cannot come to the party" << endl;
    }
    else if (age == 18)
    {
        cout << "Oh dear ! just wait for another year";
    }

    else
    {
        cout << "you are welcome to the party have fun" << endl;
    }
    // main();
    return 0;
}