#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    char s_name[20];
    char s_id[15];
    float s_cgpa;

    void show_info(void)
    {
        cout << "Name: " << s_name << endl;
        cout << "  id: " << s_id << endl;
        cout << "CGPA: " << s_cgpa << endl;
    }
};

// stand along function
void use_object(char *name, char *id, float cgpa)
{
    Student A;

    strcpy(A.s_name, name);
    strcpy(A.s_id, id);
    A.s_cgpa = cgpa;
    A.show_info();
}

int main()
{
    use_object("Muhammad", "3456345212", 3.11);

    return 0;
}

