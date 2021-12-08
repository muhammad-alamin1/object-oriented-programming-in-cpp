#include <iostream>
#include <stdexcept>

using namespace std;

void func(void)
{
    int err = 100;

    throw err;
}

int main(void)
{
    try
    {
        func();
    }
    catch(double i)
    {
        //
    }

    return 0;
}
