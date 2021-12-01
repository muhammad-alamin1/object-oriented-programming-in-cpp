/*
    What is polymorphism ? Polymorphism is a capable of haveing many forms.
    Two types of Overloading.
        1. Function Overloading
        2. Operator Overloading
**/

#include <iostream>

using namespace std;

int add(int a, int b);
double add(double a, double b);

int main(void)
{
    int ix = add(5, 2);
    double fx = add(3.5, 2.7);

    cout << "Integer type Value: " << ix << endl;
    cout << "Double type Value: " << fx << endl;

    return 0;
}

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}
