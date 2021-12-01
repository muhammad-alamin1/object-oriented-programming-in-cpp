#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

enum acc_type {CURRENT=1, SAVINGS=2, FIXED=3};

// class definition for account type object in commercial bank.
class Acc
{
private:
    int acc_id;
    char name[25];
    acc_type type;

public:
    Acc();
    Acc(int id, char *name, acc_type t);
    Acc(ifstream &fin);
    void display(void);
    ~Acc() {};
};

// Member Function Definition
Acc::Acc()
{
    int type;

    cout << endl << "Enter Account ID: #";
    cin >> acc_id;
    cout << endl << "Enter Name of Account holder: ";
    cin >> name;
    cout << endl << "Enter Account type (CURRENT = 1, SAVING = 2, FIXED = 3): ";
    cin >>type;
    Acc::type = (acc_type)type; // Assignment for base class type
}

Acc::Acc(int id, char *name, acc_type t)
{
    acc_id = id;
    strcpy(Acc::name, name);
    type = t;
}

Acc::Acc(ifstream& fin)
{
    fin.open("F:\C++\OOP in C++\day-13\overloaded_cons.dat", ios::in); // open file
    if(!fin)
    {
        cout << endl << "File Error! File not found..!" << endl;
        cout << "So, No record is created object is empty of Garbage.!";
        return;
    }
    fin >> acc_id;
    fin >> name;

    int type;
    fin >> type;
    Acc::type = (acc_type)type;
}

void Acc::display(void)
{
    static int out_no = 1;

    cout << endl << "Output# " << out_no++;
    char *type_name[] = {"", "CURRENT", "SAVING", "FIXED"};

    cout << endl << "Account ID #" << acc_id << endl;
    cout << "Name : " << name << endl;
    cout << "Account type : " << type_name[type] << endl;
}

int main(void)
{
    ifstream fin;
    Acc a1, a2(2, "Muhammad", SAVINGS), a3(fin);
    a1.display();
    a2.display();
    a3.display();

    return 0;
}
