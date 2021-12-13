#include <iostream>

using namespace std;

class A
{
    int x;

public:
    A(int x)
    {
        this->x = x;
        cout << "Value of X in Class A : " << x << endl;
    }
};

class B
{
    int x, y;

public:
    B(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout << "Value of X, Y in Class B : " << x << ", " << y << endl;
    }
};

class Derived: public A, public B
{
    int x, y, z;

public:
    Derived(int x, int y, int z): A(10), B(20, 30) // Passing argument to base constructor
    {
        this->x = x;
        this->y = y;
        this->z = z;
        cout << "Value of X, Y, Z in Derived Class : " << x << ", " << y << ", " << z << endl;
    }
};

int main(void)
{
    Derived d(40, 50, 60);

    return 0;
}
