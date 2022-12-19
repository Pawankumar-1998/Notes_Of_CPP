#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open a file for random access in binary mode
    fstream file("pawan.txt", ios::binary | ios::in | ios::out | ios::ate);

    // Check if the file was opened successfully
    if (!file.is_open())
    {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    // Write some data to the file at the current position
    file << "Hello";

    // Move the file pointer to the beginning of the file
    file.seekg(0, ios::beg);

    // Read data from the file at the current position
    string data;
    file >> data;

    // Print the data that was read from the file
    cout << data << endl;

    // Close the file
    file.close();

    return 0;
}