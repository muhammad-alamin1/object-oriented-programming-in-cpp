#include <iostream>

using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Class Base 1 Constructor." << endl;
    }
    ~Base1()
    {
        cout << "Class Base 1 Destructor." << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Class Base 2 Constructor." << endl;
    }
    ~Base2()
    {
        cout << "Class Base 2 Destructor." << endl;
    }
};

class Derived: public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived class Constructor." << endl;
    }
    ~Derived()
    {
        cout << "Derived class Destructor." << endl;
    }
};

int main(void)
{
    Derived d;

    return 0;
}
