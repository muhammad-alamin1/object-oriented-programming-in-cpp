#include <iostream>

using namespace std;

template < class Data_type > Data_type add(Data_type a, Data_type b)
{
    return (a+b);
}

int main(void)
{
    int res;
    double res1;

    res = add(5, 6);  // calling with int argument
    res1 = add(8.4, 3.8);  // calling with double argument

    cout << "Integer Result : " << res << endl;
    cout << "Double Result : " << res1 << endl;

    return 0;
}
