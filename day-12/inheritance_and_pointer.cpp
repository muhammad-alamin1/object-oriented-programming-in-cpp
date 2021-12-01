#include <iostream>

using namespace std;

class Base
{
public:
    void show_base_msg()
    {
        cout << "This is base." << endl;
    }
};

class Derived : public Base
{
public:
    void show_derived_msg()
    {
        cout << "This is Derived." << endl;
    }
};

int main(void)
{
    Base b;
    Base *ptr;
    Derived d;

    ptr = &d; // ptr points to Derived object

    ptr->show_base_msg();

    return 0;
}
