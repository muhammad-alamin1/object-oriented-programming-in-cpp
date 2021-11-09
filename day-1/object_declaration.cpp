#include <iostream>

using namespace std;

class A
{
private:
    int a, b;
public:
    A(int x, int y)
    {
        a = x;
        a = y;
    }
    void add_ab()
    {
        cout << "a+b = " << a+b << endl;
    }
};

int main(void)
{
    A a1(4, 9);
    a1.add_ab();

    return 0;
}
