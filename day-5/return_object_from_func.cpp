#include <iostream>
#include <cstring>

using namespace std;

class Obj_ret
{
    char name[25];
public:
    void get_name(char *n)
    {
        strcpy(name, n);
    }
    void print_name(void)
    {
        cout << "\n\nSo my name is: " << name << endl;
    }
};

Obj_ret funcA(void)
{
    char get_name[25];
    Obj_ret ob;

    cout << "Enter your name: ";
    cin >> get_name;

    ob.get_name(get_name);

    return ob;
}

int main(void)
{
    Obj_ret ob1;

    ob1 = funcA(); // assign object
    ob1.print_name(); // print data;

    return 0;
}

