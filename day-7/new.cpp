#include <iostream>

using namespace std;

typedef struct Student
{
    char name[25];
    char id[10];
    char dept[5];
    float cgpa;
};

int main(void)
{
    int *ptr;

    ptr = new int;

    *ptr = 50;
    cout << *ptr << endl;

    Student *ptr1;

    ptr1 = new Student;

    return 0;
}
