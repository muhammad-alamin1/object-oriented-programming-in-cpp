#include <iostream>

using namespace std;

class X
{
private:
    int x;
public:
    X()
    {
        cout << "Constructor..." << endl;
    }
    void set_x(int a)
    {
        x = a;
    }
    int get_x(void)
    {
        return x;
    }
    ~X()
    {
        cout << "Destructing..." << endl;
    }
};

void func(X *x)
{
    cout << "Value of x in from main() : " << x->get_x() << endl;
    x->set_x(15);
    cout << "Value of x in func : " << x->get_x() << endl;
}

int main(void)
{
    X x1;

    x1.set_x(10);
    func(&x1);
    cout << "After calling func(), x is : " << x1.get_x() << endl;

    return 0;
}
