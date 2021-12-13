
#include <iostream>
#include <cstring>

using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor" << endl;
    }
    ~A()
    {
        cout << "Destructing" << endl;
    }
};

// stand along function
void sample_function(void)
{
    A a; // constructor call here
    cout << "Return to main \n" ; // destructor call here
}

int main()
{
    cout << "Object creating in main" << endl;
    A b;
    sample_function();

    return 0;
}

