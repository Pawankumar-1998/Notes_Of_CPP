#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open the file "LPU.DAT" in input mode
    ifstream file("C:/test.txt");

    // Check if the file was opened successfully
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    // Variable to hold the count of characters in the file
    int count = 0;

    // Read the file character by character and increment the count
    char ch;
    while (file >> ch)
    {
        count++;
    }

    // Close the file
    file.close();

    // Print the total number of characters in the file
    cout << "Total number of characters in LPU.DAT: " << count << endl;

    return 0;
}