#include <iostream>

using namespace std;

template <class T=int, int i=50>
class X
{
    // Other Code
}

int main(void)
{
    X < > x; // T=int, i=50
    X <float> x1 // T=float, i=50
    X <double, 10> x2 // T=double, int=10
    x <10> x3 // Error: Invalid template argument for T

    return 0;
}
