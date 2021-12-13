#include <iostream>

using namespace std;

template <class Data>
void add(Data a, Data b)
{
    cout << "From Generated Function : a+b = " << a+b << endl;
}

// explicit specialization of add function
void add(int a, int b)
{
    cout << "From Explicit Specialization : a+b = " << a+b << endl;
}

int main(void)
{
    add(5, 4); // this will call specialized version
    add(5.3, 7.0); // this will call generated version

    return 0;
}
