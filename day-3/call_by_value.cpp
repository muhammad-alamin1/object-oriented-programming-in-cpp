#include <iostream>

using namespace std;

class Test
{
    int a, b;
public:
    void set_ab(int x, int y)
    {
        a = x;
        b = y;
    }

    int get_atimes_b()
    {
        return a*b;
    }

    int atimes_btimes10(Test t)
    {
        t.set_ab(10, 10);
        return (t.get_atimes_b()*10);
    }
};

int main(void)
{
    Test tst;
    tst.set_ab(5, 5);

    cout << "\nA*B*10 " << tst.atimes_btimes10(tst);
    cout << "\nA*B " << tst.get_atimes_b();

    return 0;
}
