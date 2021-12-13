#include <iostream>
#include <cstring>

using namespace std;

// function template
template <class Data>
Data min_value(Data a, Data b)
{
    if(a<b)
        return a;
    else
        return b;
}

// function specialization
char *min_value(char *s1, char *s2)
{
    if(strcmp(s1, s2)>0)
        return s2;
    else
        return s1;
}

int main(void)
{
    cout << "Min Value (4, 5) is : " << min_value(4, 5) << endl;
    cout << "Min Value (.687, .130) is : " << min_value(.687, .130) << endl;
    cout << "Min Value (N, n) is : " << min_value('N', 'n') << endl;

    return 0;
}
