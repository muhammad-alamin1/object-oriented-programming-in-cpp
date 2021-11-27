#include <iostream>
#include <cstring>

using namespace std;

class Sample
{
private:
    int a;

protected:
    int b;

public:
    int c;
    Sample()
    {
        a = 10;
        b = 10;
        c = 10;
    }
    void sum_all()
    {
        cout << "a+b+c = " << a+b+c << endl;
    }
};

int main(void)
{
    Sample smp;

    return 0;
}

