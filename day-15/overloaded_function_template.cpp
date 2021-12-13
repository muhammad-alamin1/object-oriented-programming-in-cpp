#include <iostream>

using namespace std;

// overloaded function template with one generic type
template <class T1>
void show_value(T1 t)
{
    cout << "This is with One Generic type..!" << endl;
}

// overloaded function template with two generic type
template <class T1, class T2>
void show_value(T1 t1, T2 t2)
{
    cout << "This is with two Generic type..!" << endl;
}

int main(void)
{
    show_value(2225);
    show_value("Muhammad", 3.42);

    return 0;
}
