#include <iostream>

using namespace std;

struct AB
{
    int a1;
    int a2[3];
};

class A
{
private:
    AB A1;
public:
    AB A2;
    void print_A()
    {
        A1.a1 = 3;
        A1.a2[0] = 11;
        A1.a2[1] = 12;
        A1.a2[2] = 13;

        // Print value of private member
        cout << "Value of A1 in member function: " << A1.a1 << endl;
        cout << "AB.a2[3] = ";
        for(int i = 0; i < 3; i++)
            cout << A1.a2[i] << ",";

        // Print value of public member
        cout << "\n\nValue of A2 from main function : " << A2.a1 << endl;
        cout << "\nA2.a2[3] = " ;
        for(int i = 0; i < 3; i++)
            cout << A2.a2[i] << "," ;
    }
};

int main(void)
{
    A a1;
    cout << "Enter Value for A2.a1: ";
    cin >> a1.A2.a1;

    cout << "Enter there value for A2.a2[]: ";
    for(int i = 0; i < 3; i++)
        cin >> a1.A2.a2[i];

    a1.print_A();

    return 0;
}

