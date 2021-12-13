#include <iostream>

using namespace std;

int main(void)
{
    int *ptr = new int[5];

    for(int i=0; i<5; i++)
        *(ptr+i) = 10+i;

    for(int i=0; i<5; i++)
        cout << *(ptr+i) << endl;

    return 0;
}


