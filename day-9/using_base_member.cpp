#include <iostream>

using namespace std;

class Base
{
public:
    void show(void)
    {
        cout << "Hello Muhammad! This is function from Base class.\n";
    }
};

class Derived:public Base
{
public:
    void show(void)
    {
        cout << "Hello Muhammad! This is function from Derived class.\n";
    }
};

int main(void)
{
    Derived d1;

    d1.Base::show(); // call Base class function

    return 0;
}
