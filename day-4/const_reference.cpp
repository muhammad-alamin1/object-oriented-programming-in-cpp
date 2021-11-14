#include <iostream>

using namespace std;

class Constand
{
public:
    int a;
    int change(int a) const
    {
        //this->a = a; // Error

        return a;
    }
};

int main()
{
    int i = 0;
    const int& r = i;

    //r = 5; // Error


    return 0;
}

