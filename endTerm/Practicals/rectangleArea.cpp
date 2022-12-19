#include <iostream>
using namespace std;

class area
{
    float lenght, breadth;

public:
    area(float l, float b)
    {
        lenght = l;
        breadth = b;
    }
    float getArea()
    {
        return lenght * breadth;
        // cout << "The area of the rectangle is " << ans << endl;
    }
};

int main()
{
    area ob(3, 5);
    cout << "The area of the rectangle is " << ob.getArea() << endl;

    return 0;
}