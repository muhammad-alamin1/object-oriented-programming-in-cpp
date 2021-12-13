#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    char name[25];
public:
    void get_name(char *n)
    {
        strcpy(name, n);
    }
    char *get_name(void)
    {
        return name;
    }
    void print(void)
    {
        cout << "\nName: " << name;
    }
};

void name_length(Person obj)
{
    int len;

    len = strlen(obj.get_name());
    obj.print();
    cout << "\tLength: " << len;
}

int main(void)
{
    Person obj[2];
    char get_name[20];

    cout << "\nEnter two name: \n";
    for(int i=0; i<2; i++)
    {
        cout << "\nName[" << i+1 << "]: ";
        cin >> get_name;
        obj[i].get_name(get_name);
    }

    cout << "\nLength of two name:\n";
    for(int i=0; i<2; i++)
        name_length(obj[i]);

    return 0;
}

