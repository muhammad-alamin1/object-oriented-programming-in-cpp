#include <iostream>

using namespace std;

class Base
{
public:
    int b;
    Base()
    {
        b = 10;
    }
    void show_mem_value_inbase()
    {
        cout << b << endl;
    }
};

class Derived : public Base
{
private:
    int d;
public:
    Derived()
    {
        b = 50;
        d = 100;
    }
    void show_mem_val_inderivved()
    {
        cout << b << ", " << d << endl;
    }
};

int main(void)
{
    Base b1;
    Derived d1;

    d1.show_mem_value_inbase();
    b1.show_mem_value_inbase();
    d1.show_mem_val_inderivved();

    return 0;
}


