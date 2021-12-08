#include <iostream>

using namespace std;

// Generic class
template <class T>
class X
{
public:
    X()
    {
        cout << "This Object of Generic class..." << endl;
    }
};

// explicit specialization for 'char' type
template < >
class X <char>
{
public:
    X()
    {
        cout << "This is object of Specialized class..." << endl;
    }
};

int main(void)
{
    X <double> x1; // Generated class
    X <char> x2; // Specialized class
    X <int> x3; // Generated class

    return 0;
}
