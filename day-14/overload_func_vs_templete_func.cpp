#include <iostream>
#include <string.h>

using namespace std;

int min_value(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

double min_value(double a, double b)
{
    if(a<b)
        return a;
    else
        return b;
}

char *min_value(char *str, char *str1)
{
    if(strcmp(str, str1) > 0)
        return str1;
    else
        return str;
}

int main(void)
{

    return 0;
}
