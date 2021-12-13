#include <iostream>

using namespace std;

template <class T1, int i>
class X
{
    T1 x[i];
public:
    X(void);
    void get_element();
    void show_element();
};

template <class T1, int i>
X <T1, i> :: X(void)
{
    for(int size = 0; size < i; size++)
        x[size] = 0;
}

template <class T1, int i>
void X <T1, i> ::get_element()
{
    cout << endl << "Enter " << i << "Element : " << endl;
    for(int size=0; size<i; size++)
    {
        cout << endl << " Element #" << size+1 << " : ";
        cin >> x[size];
    }
}

template <class T1, int i>
void X <T1, i> ::show_element()
{
    cout << endl << "Current Elements are : ";
    for(int size=0; size<i; size++)
        cout << x[size] << " ";
    cout << endl;
}

int main(void)
{
    X <float, 3> x1;
    x1.get_element();
    x1.show_element();

    return 0;
}
