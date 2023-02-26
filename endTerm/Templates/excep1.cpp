#include <iostream>
#include <string>
using namespace std;

template <typename T>
class example
{
    T data;

public:
    T getData(T x)
    {
        data = x;
    }
    T show()
    {
        cout << "The value of data is " << data << endl;
    }
};

int main()
{
    example<string> ob;
    ob.getData("pawan");
    ob.show();

    return 0;
}