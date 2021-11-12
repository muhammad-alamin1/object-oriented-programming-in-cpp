#include <iostream>
#include <conio.h>

using namespace std;

class A
{
private:
    int a, b;
public:
    A(int x, int y){a = x; b = y;} // constructor
    int add(void){return (a+b);}
};

void funcA(class A obj);

int main(void)
{
    A ob1(5, 10);
    funcA(ob1);

    getch();
}

void funcA(class A obj)
{
    int get_object_value;

    get_object_value = obj.add();
    cout << "\nMultiply returned value with 5 gives: " << get_object_value * 5;
}
