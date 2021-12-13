#include <iostream>

using namespace std;

int main(void)
{
    int number = 1960.298900;

    cout << "Default Output 1960.298900 is : " << number << endl;

    cout.setf(ios::showpoint | ios::showpos);
    cout << "After setting showpoint and showpos : " << number << endl;

    cout.unsetf(ios::showpoint);
    cout << "After clearing showpoint " << number << endl;

    cout.setf(ios::hex | ios::showbase);
    cout << "Hex value of 1960.298900 is : " << (int)number << endl;

    return 0;
}
