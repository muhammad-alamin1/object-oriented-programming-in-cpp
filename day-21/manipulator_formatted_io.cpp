#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    bool b = false;

    cout << "Without manipulator \"b\" = " << b << endl;
    cout << "Without manipulator \"b\" = " << boolalpha << b;

    return 0;
}
