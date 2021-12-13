#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    char name[30];
    char id[12];

public:
    Student(char *name, char *id)
    {
        strcpy(Student::name, name);
        strcpy(Student::id, id);
    }
    void show(void)
    {
        cout << "\n Name : " << name << endl;
        cout << "   ID : " << id << endl;
    }
};

class Registration : public Student
{
private:
    float reg_fee;
    char *reg_date;

public:
    Registration(char *name, char *id, float fee, char *date): Student(name, id)
    {
        reg_fee = fee;
        strcpy(Registration::reg_date, date);
    }
    void show_reg(void)
    {
        show();
        cout << "  Fee : " << reg_fee << endl;
        cout << " Date : " << reg_date << endl;
    }
};

int main(void)
{
    //Student Muhammad("Muhammad", "6345123423");
    Registration Muhammad("Muhammad", "4352352344", 999.99, "01-12-2021");

    //Muhammad.show();
    Muhammad.show_reg();

    return 0;
}
