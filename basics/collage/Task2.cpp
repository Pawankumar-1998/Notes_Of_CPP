#include <iostream>
using namespace std;

void display(float month[], float size);
float total(float month[], float size);
void average(float ans, float size);
void highRain(float month[], float size);

/*
 */

int main()
{
    system("cls");
    float month[12];
    float arrLength = sizeof(month) / sizeof(month[0]); // 12 is the size of the array

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Enter the amount of rainfall in " << i + 1 << " month" << endl;
        cin >> month[i];
    }

    display(month, arrLength);           // for displaying the array function
    float ans = total(month, arrLength); // storing the total in the ans
    cout << " the total is " << ans;
    average(ans, arrLength); // for displaying the value
    highRain(month, arrLength);

    /*
    cout << " The average is " << average(month, arrLength) << endl;
    */

    return 0;
}

// this displays the entered array

void display(float month[], float size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "The amount of rainfall in " << i + 1 << " month is " << month[i] << endl;
        // cout << " The size is " << size << endl;
    }
}

// this function returns the total sum

float total(float month[], float size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + month[i];
    }
    return sum;
}

// this function displays the average

void average(float ans, float size)
{
    float average = ans / size;
    cout << " The average is " << average;
}

void highRain(float month[], float size)
{
    int num = 0;
    int max = month[0];
    for (int i = 0; i < size; i++)
    {
        if (month[i] > max)
        {
            max = month[i];
            num = i;
        }
    }
    cout << "The highest amount of rainfall " << max << " And in the month of " << num << endl;
}

/*


*/