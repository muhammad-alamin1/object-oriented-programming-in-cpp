#include <iostream>

using namespace std;

class Test
{
    int *a;
public:
    Test(int x)
    {
        a = new int;
        *a = x;
    }
    int get_A()
    {
        return *a;
    }
    ~Test()
    {
        delete a;
    }

};

int pow(Test t)
{
    return ((t.get_A()) * (t.get_A()));
}

int main(void)
{
    Test tst(10);

    cout << "\nA^2 = " << pow(tst);

    cout << "\n" << tst.get_A(); // gerbase value

    return 0;
}

