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
    int x, y;
public:
    Derived(int i, int j):Base(10, 100)
    {
        // calling base constructor
        // &&
        x = i;
        y = j;
        cout << "Value of x, y in Derived class : " << x << ", " << y << endl;
    }
};

int main(void)
{
    Derived d1(20, 200);

    return 0;
}
