#include <iostream>

using namespace std;

class String
{
    void concat(int new_len);
    int max_len, length;
    char *str;

public:
    int get_len();
    char *get_string();
    void show_string();
    void c_cat(String &o);
    void c_cat(char *s);
    String(int len=127);
    String(const char *s);
    virtual ~String();
};

String::String(const char *s)
{
    int len = 0;
    while(*(s+len))
        len++;

    str = new char[len+1];
    for(int i = 0; i < len; i++)
        *(str+i) = *s++;

    *(str+len) = NULL;
    length = max_len = len;
}

String::String(int len)
{
    str = new char[len+1];
    *str = NULL;
    length = 0;
    max_len = len;
}

String::concat(int new_len)
{
    char *tstr = new char[new_len+1];

    int i = 0;
    while(str[i])
        tstr[i] = str[i++];

    tstr[i] = NULL;
    delete [] str;
    str = tstr;
    max_len = new_len;
}

int main(void)
{


    return 0;
}
