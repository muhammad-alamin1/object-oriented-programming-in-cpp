#include <iostream>
#include <new.h>
#include <stdlib.h>

using namespace std;

void error(void)
{
    cout << "Error! Memory Allocation Faild!" << endl;
    exit(1);
}

int main(void)
{
    set_new_handler(error);

    int *ptr;
    ptr = new int[500000000000];

    *ptr = 50;
    cout << "First element is : " << *ptr << endl;
    set_new_handler(0);

    return 0;
}


