#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter the value of num1 :\n"; /* this is insertion operator */
    cin >> num1;                           /* this is extraction operator */
    cout << "enter the value of num2 :\n"; /* this is insertion operators */
    cin >> num2;                           /* this is extraction operator */

    cout << "the sum is " << num1 + num2;
    return 0;
}