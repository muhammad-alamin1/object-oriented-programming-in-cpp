#include <iostream>

using namespace std;

class X
{
    int height, width;

public:
    X()
    {
        height = width = 0;
    }
    X(int height, int width)
    {
        this->height = height;
        this->width = width;
    }
    X operator+(int x);
    void show()
    {
        cout << "Height : " << height << ", Width : " << width << endl;
    }
};

X X::operator+(int x)
{
    X temp;

    temp.height = height+x;
    temp.width = width+x;

    return temp;
}

int main(void)
{
    X x1(50, 75), x2;

    x2 = x1+25;

    x1.show();
    x2.show();

    return 0;
}
