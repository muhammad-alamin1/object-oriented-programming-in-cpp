#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    A(int i)
    {
        x = i;
        cout << "Value of X in A : " << x << endl;
    }
};

class B:public A
{
private:
    int x, y;

public:
    B(int i, int j):A(10)
    {
        x = i;
        y = j;
        cout << "Value of x, y in B : " << x << ", " << y << endl;
    }
};

class C:public B
{
private:
    int x, y, z;

public:
    C(int i, int j, int k):B(20, 30)
    {
        x = i;
        y = j;
        z = k;
        cout << "Value of X, Y, Z : " << x << ", " << y << ", " << z << endl;
    }
};

int main(void)
{
    C c(40, 50, 60);

    return 0;
}
