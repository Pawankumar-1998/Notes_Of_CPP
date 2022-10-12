#include <iostream>
using namespace std;

class product
{
    float a, b, percentage ;

public:
    // this is declaration of friend function
    friend product takePercentage(product o1);
    void takeValue(int d1, int d2)
    {
        a = d1;
        b = d2;
        percentage = (b / a) * 100;
    }

    void displayPercentage()
    {
        cout << "The percentage of the sold products is " << percentage << " % " << endl;
    }
};
// friend function
product takePercentage(product o1)
{
    product o3 , ans;
    // accesing private members of product class
    o3.takeValue(o1.a, o1.b);
    // returning the object
    return o3;
}

int main()
{
    system("cls");
    product shirts, pants, tShirts, Sweaters , Hats, Bags, ans;
    
    shirts.takeValue(40, 29);

    pants.takeValue(50, 45);

    tShirts.takeValue(35, 34);

    Sweaters.takeValue(40, 23);

    Hats.takeValue(20, 19);

    Bags.takeValue(30, 19);

    ans = takePercentage(shirts);
    ans.displayPercentage();

    ans = takePercentage(pants);
    ans.displayPercentage();

    ans = takePercentage(tShirts);
    ans.displayPercentage();

    ans = takePercentage(Sweaters);
    ans.displayPercentage();

    ans = takePercentage(Hats);
    ans.displayPercentage();

    ans = takePercentage(Bags);
    ans.displayPercentage();

    return 0;
}