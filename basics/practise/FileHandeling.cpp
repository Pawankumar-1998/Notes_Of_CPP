#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    cout << "enter the name of the file " << endl;
    cin >> name;
    ofstream paw("file1.txt"); // open the file and writing in the file
    paw << name;               // sending the data into the file using object
    paw.close();               // closing the file
    // now we need ifstream to read the data from the file
    string n;
    ifstream pawn("text1.txt");
    pawn >> n;
    cout<<"The name in the file is "<<n<<endl;
    return 0;
}
