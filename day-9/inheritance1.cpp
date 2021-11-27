#include <iostream>

using namespace std;

class Base
{
protected:
    int b;
};

class Derived : private Base
{
public:
    int d1;
    void show_derived_value()
    {
        d1 = 10;
        b = 10;   // b is a private member of derived
        cout << b+d1 << endl;
    }
};

class Derived1 : private Derived
{
public:
    void show_derived1_value()
    {
        d1 = 50;
        b = 50; // error: b not accessible because Derived uses private to inherit from base
        cout << d1 << endl;
    }
};

int main(void)
{
    Derived d1;
    Derived1 d2;

    d1.show_derived_value();
    d2.show_derived1_value();

    return 0;
}
