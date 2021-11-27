#include <iostream>

using namespace std;

class Base
{
private:
    int b1;

protected:
    int b2;

public:
    int b3;
    Base()
    {
        b1 = 10;
        b2 = 10;
        b3 = 10;
    }

    void show_base_member(void)
    {
        cout << b1 << ", " << b2 << ", " << b3 << endl;
    }
};

class Derived : public Base
{
public:
    void change_base_member_value(void)
    {
        b2 = 20;  // protected member of base is accesible
        b3 = 30;
    }
};

int main(void)
{
    Base b1;
    Derived d1;

    b1.show_base_member();
    d1.change_base_member_value();
    d1.show_base_member(); /// calling base class member function

    return 0;
}
