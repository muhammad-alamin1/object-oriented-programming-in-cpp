#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor called." << endl;
    }
    ~Base()
    {
        cout << "Base Destructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor called." << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructors called." << endl;
    }
};

int main(void)
{
    Derived d1;

    return 0;
}
