#include <iostream>

using namespace std;

class A
{
    int x;
public:
    void val_of_x(int a)
    {
        x = a;
    }
    int get_x()
    {
        return x;
    }
};

void power(A *); // function prototype call by reference

int main(void)
{
    A a;
    a.val_of_x(10);

    cout << "\nBefore calling value of x is : " << a.get_x();
    power(&a);
    cout << "\nAfter calling value of x is : " << a.get_x();

    return 0;
}

void power(A *a)
{
    a->val_of_x(a->get_x()*a->get_x());
}
