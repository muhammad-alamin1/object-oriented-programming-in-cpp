#include <iostream>

using namespace std;

class A
{
private:
    int a;
public:
    A(int a)
    {
        this->a = a;
        cout << "\nConstructing...";
    }
    void print(void)
    {
        cout << "\nValue of A is: " << a;
    }
    ~A()
    {
        cout << "\nDestructing...";
    }
};

void funcA(A obj)
{
    obj.print();
}

int main(void)
{
    A ob1(10);
    funcA(ob1);

    return 0;
}
