#include <iostream>

using namespace std;

int main(void)
{
    char ch, text[512];
    int i=0;

    cout << "Enter few line of input bellow then press Ctrl+q then press enter" << endl;

    while(!cin.eof())
    {
        cin.peek();
        while(((ch = cin.get()) != '\n') && (ch != 17))
        {
            text[i++] = ch;
        }
        if(ch == 17)
            break;
        text[i++] = 'n';
    }
    text[i] = NULL;

    cout << endl << endl << "You entered" << endl << text << endl;

    return 0;
}
