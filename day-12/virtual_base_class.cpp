#include <iostream>

using namespace std;

class A
{
protected:
    int i;
};

class B: virtual public A  // B inherit A
{
    // Other code goes here
};

class C: virtual public A  // C inherit A
{
    // Other code goes here
};

class D: public B, public C // D inherit B and C
{
public:
    void show_value()
    {
        i = 10;
        cout << "Value of i : " << i << endl;
    }
};

int main(void)
{
    D d;
                                //
    d.show_value();   //

    return 0;
}
