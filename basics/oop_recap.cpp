#include <iostream>
#include <string>
using namespace std;

// nesting of member funtion

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display1();
    void display();
    void ones_complement();
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << "This is not a binary number" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display1(void)
{
    cout << "Displaying  the  binary number you entered " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
void binary ::display(void)
{
    cout << "Displaying  complement of your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    system("cls");
    binary b;
    b.read();
    // b.chk_bin(); // here we nested funtion , this is hided in the main function
    b.display1();
    b.ones_complement();
    cout << endl;
    b.display();

    return 0;
}