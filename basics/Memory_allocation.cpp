#include <iostream>
using namespace std;

class shop
{
    int item[100];
    int itemPrice[100];

public:
    int counter;
    void initcount(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter id of your item number " << counter + 1 << endl;
    cin >> item[counter];
    cout << "Enter the price of this item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item Number " << item[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    system("cls");
    int r;
    cout << "How many items you want to enter " << endl;
    cin >> r;
    shop sales;
    sales.initcount();
    // sales.setPrice();
    // sales.setPrice();
    // sales.setPrice();

    for (int i = 0; i < r; i++)
    {
        sales.setPrice();
    }

    sales.displayPrice();

    return 0;
}