#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forget();

int main()
{

    int c;
    cout << "\t\t\t_______________________________________________________________________\n\n\n";
    cout << "\t\t\t                           welcome to login page                        \n\n\n";
    cout << "\t\t\t___________________                MENU        ________________________  \n\n\n";
    cout << "\t\t\t                                                                          \n\n\n";
    cout << "\t| Press 1 to LOGIN                                 |" << endl;
    cout << "\t| Press 2 to REGISTER                              |" << endl;
    cout << "\t| Press 3 to if you forget your PASSWORD           |" << endl;
    cout << "\t| Press 4 exit                                     |" << endl;
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forget();
        break;

    case 4:
        cout << "\t\t\t   THANK YOU       \n\n";
        break;

    default:
        system("cls");
        cout << "\t\t\t Please select from the below option \n"
             << endl;
        main();
    }
    return 0;
}

void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the user name and password \n"
         << endl;
    cout << "\t\t\t   USERNAME : \t";
    cin >> userId;
    cout << "\t\t\t   PASSWORD : \t";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "\n your login is SUCCESFULL \n Thanks for logging in : \n";
        main();
    }
    else
    {
        cout << "Invalid id and password please cheak your username and password \n";
        main();
    }
}

void registration()
{
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout << "\t\t\t Enter the username : ";
    cin >> ruserId;
    cout << "\t\t\t Enter the password : ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << endl;
    system("cls");
    cout << "\n\t\t\t Registration is succesfull : \n";
    main();
}

void forget()
{
    int option;
    system("cls");
    cout << "\t\t\t You forget the password ? no worries \n";
    cout << "Press 1 to search your id by user name " << endl;
    cout << "Press 2 to go back to your main menu" << endl;
    cout << "\t\t\t Enter your choice :";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int count = 0;
        string suserId, sId, spass;
        cout << "\n\t\t\\ enter the username which you remembered :";
        cin >> suserId;

        ifstream f2("record.txt");
        while (f2 >> sId >> spass)
        {
            if (sId == suserId)
            {
                count == 1;
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n Your acoount is found \n";
            cout << "\n\n your password is :" << spass;
            main();
        }
        else
        {
            cout << "\n\t sorry !! your account is not found : \n";
        }
    }

    case 2:
    {
        main();
    }

    default:
    {
        cout << "\t\t\t Wrong choice please try again " << endl;
        main();
    }
    break;
    }
}