#include <iostream>

using namespace std;

template <class T1, class T2, class T3>
class X
{
private:
    T1 p;
    T2 q;
    T3 r;

public:
    X(T1 p, T2 q, T3 r)
    {
        this->p = p;
        this->q = q;
        this->r = r;
    }
    void show_value();
};

// Definition of member function show value
template <class T1, class T2, class T3>
void X<T1, T2, T3>::show_value()
{
    cout << " P : " << p << endl;
    cout << " q : " << q << endl;
    cout << " R : " << r << endl;
}

int main(void)
{
    // Declare two object with different data type
    X <int, char*, double> x(101, "Muhammad", 3.50);
    X <double, char, char*> x1(9.99, 'A', "Alu Bapery!");

    cout << "Value of X's member variable..!" << endl;
    x.show_value();

    cout << endl << "Value of X's member variable..!" << endl;
    x1.show_value();

    return 0;
}
