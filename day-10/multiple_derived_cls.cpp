#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor." << endl;
    }
    ~Base()
    {
        cout << "Base Destructor." << endl;
    }
};

class Derived1:public Base
{
public:
    Derived1()
    {
        cout << "Derived1 Constructor." << endl;
    }
    ~Derived1()
    {
        cout << "Derived1 Destructor."<< endl;
    }
};

class Derived2:public Base
{
public:
    Derived2()
    {
        cout << "Derived2 Constructor." << endl;
    }
    ~Derived2()
    {
        cout << "Derived2 Destructor."<< endl;
    }
};

int main(void)
{
    Derived1 d1;
    Derived2 d2;

    return 0;
}
