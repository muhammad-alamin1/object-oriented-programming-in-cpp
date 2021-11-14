#include <iostream>

using namespace std;

class A
{
public:
    // function overloading
    int add(int a, int b)
    {
        return a+b;
    }
    int add(int x, int y, int z)
    {
        return x+y+z;
    }
};


int main()
{
    A over;

    cout << over.add(2, 3) << endl;
    cout << over.add(2, 3, 4);


    return 0;
}


