#include <iostream>
#include <cstring>

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
    Student *ptr;

    ptr = new Student;

    strcpy(ptr->name, "Muhammad Al-amin");
    strcpy(ptr->id, "87234823");
    strcpy(ptr->dept, "CSE");
    ptr->cgpa = 3.50;

    // print value
    cout << "Name: " << ptr->name << endl;
    cout << "Id : " << ptr->id << endl;
    cout << "Dep: " << ptr->dept << endl;
    cout << "CGPA: " << ptr->cgpa << endl;

    return 0;
}

