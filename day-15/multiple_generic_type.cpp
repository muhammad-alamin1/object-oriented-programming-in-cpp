#include <iostream>

using namespace std;

template <class T1, class T2, class T3>
void show_value(T1 t1, T2 t2, T3 t3)
{
    cout << "t1 : " << t1 << endl;
    cout << "t2 : " << t2 << endl;
    cout << "t3 : " << t3 << "\n\n";
}

int main(void)
{
    show_value("Muhammad", "CSE", 3.46); // char char* float
    show_value(576000, 'N', 3.1415993499485); // int char double

    return 0;
}
