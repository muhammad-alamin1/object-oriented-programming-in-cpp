#include <iostream>

using namespace std;

template <class BaseT, int i=10>
class Base
{
    // Other Code
};

template <class DerivedT>
class Derived:public Base <float, 50>
{
    // Other Code
};

int main(void)
{


    return 0;
}
