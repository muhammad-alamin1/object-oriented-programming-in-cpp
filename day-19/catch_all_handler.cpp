#include<iostream>

using namespace std;

void some_func(void)
{
    int error = 100;
    double error1 = 100.3209;

    if(error)
        throw error;
    if(error1)
        throw error1;
}

int main(void)
{
    try
    {
        some_func();
    }
    catch(...)
    {
        cout << "Exception Stops, Some error occurs..!";
    }

    return 0;
}
