#include <iostream>

using namespace std;

int main(void)
{
    int number = 2225;
    cout.setf(ios::showbase);

    cout << " Number 2225 in Octal          : " << oct << number << endl;
    cout << " Number 2225 in Hexadecimal    : " << hex << number << endl;
    cout << " Number 2225 in Decimal        : " << dec << number << endl;

    return 0;
}
