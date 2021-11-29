#include <iostream>

using namespace std;

class A
{
public:
    void show_a_msg()
    {
        cout << "This is class A." << endl;
    }
};

class B:public A
{
public:
    void show_b_msg()
    {
        cout << "This is class B." << endl;
    }
};

class C:public B
{
public:
    void show_c_msg()
    {
        cout << "This is classs C." << endl;
    }
};

int main(void)
{
    C c;

    c.show_a_msg(); // access class A member function && it's true

    return 0;
}
