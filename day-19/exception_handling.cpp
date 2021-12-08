#include<iostream>

using namespace std;

void some_func(void)
{
    int error = 100;
    // Some statement
    throw error;
}

int main(void)
{
    try
    {
        some_func();
    }
    catch(int i)
    {
        // some statement
    }

    return 0;
}
