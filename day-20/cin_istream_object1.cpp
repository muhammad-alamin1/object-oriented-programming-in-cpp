#include <iostream>

using namespace std;

int main(void)
{
    char line[80];

    cout << "Enter a line: ";
    cin.getline(line, sizeof(line), 'm');

    cout << endl << "You entered: " << line << endl;
    cout << "Number of character : " << cin.gcount();

    return 0;
}

