#include <iostream>
#include <cstring>

using namespace std;

class Monitor
{
private:
    int inch;
    char company[15];
    char model[25];
public:
    Monitor(int i, char *c, char *m);
    void show_info();
};

Monitor::Monitor(int i, char *c, char *m)
{
    inch = i;
    strcpy(company, c);
    strcpy(model, m);
}

void Monitor::show_info()
{
    cout << "Monitor size: " << inch << endl;
    cout << "Manufacturer : " << company << endl;
    cout << "Model : " << model << endl << endl;
}

int main(void)
{

    return 0;
}

