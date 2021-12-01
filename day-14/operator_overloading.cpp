#include <iostream>

using namespace std;

class Op
{
private:
    int height, width;

public:
    Op operator+(int x) // Overloading + operator

}

// Definition of overloaded + operator
Op Op::operator+(int x)
{
    Op = temp;

    temp.height = height+x;
    temp.width = width+x;

    return temp;
}

int main(void)
{

    return 0;
}
