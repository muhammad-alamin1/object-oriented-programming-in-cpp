#include <iostream>

using namespace std;

class Base1
{
public:
    void show_msg_base1()
    {
        cout << "This is Base 1 class. " << endl;
    }
};

class Base2
{
public:
    void show_msg_base2()
    {
        cout << "This is Base 2 class. " << endl;
    }
};

class Derived:public Base1, public Base2
{
public:
    show_derived_msg()
    {
        cout << "This is Derived class " << endl;
    }
};

int main(void)
{
    Derived d;

    d.show_msg_base1();
    d.show_msg_base2();
    d.show_derived_msg();

    return 0;
}
