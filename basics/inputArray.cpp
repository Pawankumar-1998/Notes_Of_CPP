#include <iostream>
#include <array>
using namespace std;

int main()
{
    system("cls");
    int arr[12];
    int n;
    for (int i = 1; i <= 12; i++)
    {
        cout << "Enter the value in " << i << " month" << endl;
        cin >> n;
        arr[i] = n;
    }

    for (int i = 1; i <= 12; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}