#include <iostream>

using namespace std;

class Base
{
private:
    int x, y;

public:
    Base(int i, int j)
    {
        x = i;
        y = j;

        cout << "Value of x, y is : " << x << ", " << y << endl;
    }

};

class Derived : public Base
{
public:
    Derived():Base(10, 100)
    {
        // calling base constructor
    }
};

int main(void)
{
    Derived d1;

    return 0;
}
