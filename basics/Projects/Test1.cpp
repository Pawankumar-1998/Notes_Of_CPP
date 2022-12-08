// Employee Attendence Tracking System
#include <iostream>
#include <conio.h>
// using fstream to store the data
#include <fstream>
// standard Input library is used to allocate memory in our program this can be excluded also
#include <stdlib.h>
using namespace std;
class attend
{
    float p = 0, t = 0, w;  

public:
    int enter();
    void calculate();
};
// This function is intro of the project
void intro()
{
    system("cls");
    cout << "\n\n\n\n\n";
    cout << "\t\t\t==============================";
    cout << "\n\t\t\t==============================";
    cout << "\n\n\t\t\t Welcome To The Project";
    cout << "\n\n\t\t\t==============================";
    cout << "\n\t\t\t==============================";
    getch();
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << "\t\t\t==============================";
    cout << "\n\t\t\t==============================";
    cout << "\n\n\t\t\t  Employee Attendence Tracking System";
    cout << "\n\n\n\t\t\t\tVersion : 1.1";
    cout << "\n\n\t\t\t==============================";
    cout << "\n\t\t\t==============================";
    getch();
    system("cls");
    cout << "\n\n\n";
    cout << "\t\t\t====================================";
    cout << "\n\t\t\t====================================";
    cout << "\n\n\t\t\t\t    Introduction";
    cout << "\n\n\t\t\t====================================";
    cout << "\n\t\t\t====================================";
    cout << "\n\n\t\t\t Name :		P Pawan Kumar";
    cout << "\n\t\t\t Class :	MCA";
    cout << "\n\t\t\t Section :	D2215";
    cout << "\n\t\t\t Regd no. :	12208315";
    cout << "\n\t\t\t Teacher :	Uminder Kaur";
    cout << "\n\t\t\t Institute :	Lovely Professional University , Punjab";
    cout << "\n\n\t\t\t====================================";
    cout << "\n\t\t\t====================================";
    getch();
}

// above this is a veiwing page of the introduction
// this function is for update the attendance
int attend::enter() // update the attendance
{
    int date, month, year;
    int i, n, k, a, c;
    // for a while being taking the no of user 20
    int z[20];
    cout << ">>ENTER ANY KEY TO GIVE THE DATE... " << endl;
    cin >> i;
    while (i)
    {
        cout << "->Enter DATE/MONTH/YEAR: " << endl;
        cin >> date >> month >> year;
        cout << endl;
        // this months are having 31 days
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (date > 31 || date == 0)
            {
                c = 0;
            }
            else
            {
                c = 1;
            }
        }
        // this months are having 30 days
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (date > 30 || date == 0)
            {
                c = 0;
            }
            else
            {
                c = 1;
            }
        }
        // this a special case as feb has 28
        if (month == 2)
        {
            if (date > 29 || date == 0)
            {
                c = 0;
            }
            else
            {
                c = 1;
            }
        }
        if (month > 12)
        {
            c = 0;
        }
        if (month == 0 || year == 0)
        {
            c = 0;
        }
        switch (c) // gives if the given date is correct or not and update
        {
        case 0:
            cout << "Please enter::VALID DATE::" << endl
                 << endl;
            break;
        case 1:
            cout << ">>SYSTEM ALLOTING SLABS FOR THE USER (Per day Slabs is 7) ";
            cin >> n;
            cout << endl;
            for (k = 1; k < n + 1; k++)
            {
                cout << "->ENTER '1' IF PRESENT ELSE '0' TO ABSENT FOR THE SLAB " << k << " :";
                cin >> a;
                if (a == 1)
                {
                    p++;
                    t++;
                    z[k] = 1;
                    cout << "   ......................................................................" << endl
                         << endl;
                    cout << "                         :::UPDATED AS PRESENT:::" << endl
                         << endl;
                    cout << "   ......................................................................" << endl
                         << endl;
                }
                else
                {
                    t++;
                    z[k] = 0;
                    cout << "   ......................................................................" << endl
                         << endl;
                    cout << "                          :::UPDATED AS ABSENT:::" << endl
                         << endl;
                    cout << "   ......................................................................" << endl
                         << endl;
                }
            }
            cout << endl;
            cout << "                    ::::::ATTENDANCE OF THE DAY IS UPDATED AS:::::" << endl;
            for (k = 1; k < n + 1; k++)
            {
                cout << "__________";
            }
            cout << endl
                 << endl;
            cout << "DD/MM/YY    ";
            for (k = 1; k < n + 1; k++)
            {
                cout << "p" << k << "    ";
            }
            cout << endl
                 << endl;
            cout << date << "/" << month << "/" << year << "   ";
            for (k = 1; k < n + 1; k++)
            {
                if (z[k] == 1)
                {
                    cout << "P"
                         << "     ";
                }
                else
                {
                    cout << "A"
                         << "     ";
                }
            }
            cout << endl
                 << endl;
            for (k = 1; k < n + 1; k++)
            {
                cout << "__________";
            }
            cout << endl;
            cout << endl;
            break;
        default: // To exit
            exit(0);
        }
        cout << ">>ENTER 1 TO TO UPDATE ANOTHER DAY ELSE 0  :";
        cin >> i;
        cout << endl;
    }
}
// this function is used to calculate the percentage of the employee
void attend::calculate()
{
    int x, r;
    float s;
    x = (t * 75) / 100;
    s = (p * 100) / t;
    if (s < 75 && s > 65)
    {
        cout << "   _________________________________________________________________________" << endl
             << endl;
        cout << "                           YOUR ATTENDANCE IS LOW : " << s << "%" << endl
             << endl;
        r = x - p;
        cout << "   ........................................................................." << endl
             << endl;
        cout << "                        YOU MUST  ATTEND " << r << " SLABS TO COVER                 " << endl
             << endl;
        cout << "   _________________________________________________________________________" << endl
             << endl;
    }
    if (s < 65)
    {
        int y;
        y = (t * 65) / 100;
        int k = y - p;
        cout << "   __________________________________________________________________________" << endl
             << endl;
        cout << "                     YOUR ATTENDANCE IS : " << s << "%" << endl
             << endl;
        cout << "   .........................................................................." << endl
             << endl;
        cout << "                   you must have attended" << k << " slabs                      " << endl;
        cout << "   __________________________________________________________________________" << endl
             << endl;
    }
    if (s > 75)
    {
        cout << "   __________________________________________________________________________" << endl
             << endl;
        cout << "                      YOUR ATTENDANCE IS :" << s << "%" << endl
             << endl;
        cout << "   .........................................................................." << endl
             << endl;

        cout << "   __________________________________________________________________________" << endl
             << endl;
    }
}

int main()
{
    intro();
    attend o1, o2, o3;
    int a, w;
    ifstream file1;
    ofstream file2;
    cout << endl;
    cout << "                     EMPLOYEE ATTENDANCE TRACKING SYSTEM                " << endl;
    cout << "                   ------------------------------------------              " << endl
         << endl;
    cout << ":::::::::::::::::::      ENTER ID OF EMPLOYEE TO REGISTER ATTENDENCE     :::::::::::::::::::" << endl;
    cin >> a;
    cout << endl;
    while (a)
    {
        cout << "********************************   OPTIONS   **********************************" << endl
             << endl; // printing options
        cout << "                            1.VIEW YOUR ATTENDANCE" << endl
             << endl
             << "                           2. TAKE  ATTENDANCE" << endl
             << endl;
        cout << "*******************************************************************************" << endl;
        cin >> w;
         // Selecting the cases here 
        switch (w)
        {
            // Sending the data to the file
        case 1:
            file1.open("attendance1.txt");
            file1.read((char *)&o1, sizeof(o1));
            o1.calculate();
            file1.close();
            break;
            // Reciving the data from the file 
        case 2:
            file1.open("attendance1.txt");
            file1.read((char *)&o2, sizeof(o2));
            file1.close();
            o2.enter();
            file2.open("attendance1.txt");
            file2.write((char *)&o2, sizeof(o2));
            file2.close();
            break;
        }
        cout << ">>ENTER 1 TO CONTINUE ELSE 0" << endl;
        cin >> a;
    }
    return 0;
}