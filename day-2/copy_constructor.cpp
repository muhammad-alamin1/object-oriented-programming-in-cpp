#include <iostream>
#include <cstring>

using namespace std;

class String_length
{
public:
    char *p;
    void print(void)
    {
        cout << "\t" << p << "\tLength is: " << strlen(p) << '\n';
    }

    String_length()
    {
        p = new char[50];
    }
    String_length(String_length&); // Copy constructor
};

// defining copy constructor
String_length::String_length(String_length& str)
{
    strcpy(p, str.p);
}

int main()
{
    String_length str1;

    strcpy(str1.p, "Str1: Muhammad");

    cout << "Before Assigning: \n";
    str1.print();

    String_length str2 = str1;

    strcpy(str1.p, "Str1: Al amin");
    cout << "\nAfter Assigning: \n";
    str1.print();
    str2.print();

    return 0;
}
