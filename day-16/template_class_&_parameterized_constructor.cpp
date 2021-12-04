#include <iostream>

using namespace std;

template <class T>
class X
{
    T x;

public:
    X(T x)
    {
        this->x = x;
        cout << "Value of x : " << x << endl;
    }
};

int main(void)
{
    X <int> x(5);

    return 0;
}
