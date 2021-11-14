#include <iostream>

using namespace std;

int& func(int a)
{
    return a;
}

int main()
{
    int i = 5;
    cout << i << endl;

    int *p;
    p = &i;
    cout << *p << endl;

    int& r = i;
    cout << r << endl;

    r = 7;
    cout << i << endl;

    int a;
    a = 5;

    int& q = a;
    func(a);


    return 0;
}
