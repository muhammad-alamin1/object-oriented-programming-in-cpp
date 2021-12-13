#include <iostream>

using namespace std;

class Base
{
protected:
    int b1;
public:
    int b2;
};

class Derived : protected Base
{
public:
    void show_sum()
    {
        b1 = 50; // b1 is inherited protected member of class Derived
        b2 = 50; // b2 is inherited protected member of class derived
        cout << b1 + b2 << endl;
    }
};

int main(void)
{
    Derived d1;

    d1.b1 = 60; // Error: Cannot access protected member of call Derived
    d1.b2 = 60; // Error: Cannot access protected member of call Derived

    d1.show_sum();

    return 0;
}

