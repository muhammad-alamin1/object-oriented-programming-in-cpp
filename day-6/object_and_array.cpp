#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char name[20];
public:
    Person() // Constructor
    {
        cout << "\nCreating...";
    }
    void get_name(char *n)
    {
        strcpy(name, n);
    }
    void print_name(void)
    {
        cout << "\nName: " << name << '\n';
    }
    ~Person()
    {
        cout << "\nDestructing...";
    }
};

int main(void)
{
    Person ob[3];

    cout << "\n\n";
    ob[0].get_name("Muhammad");
    ob[1].get_name("Al-amin");
    ob[2].get_name("Umor");

    for(int i = 0; i < 3; i++)
        ob[i].print_name();

    return 0;
}
