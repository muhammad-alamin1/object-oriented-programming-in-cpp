#include <iostream>

using namespace std;

// Template Class
template <class T>
class Average
{
    T arr[5];  // T type array

public:
    void get_element()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << endl << "Element #" << i+1 << " : ";
            cin >> arr[i];
        }
    }
    // get average
    T get_average()
    {
        T sum = 0;
        for(int i = 0; i < 5; i++)
            sum += arr[i];
        return sum;
    }
};

int main(void)
{
    Average <int> ave; // object declaring
    Average <double> ave1;  // object declaring

    ave.get_element();
    cout << endl << "Sum of integer element: " << ave.get_average() << endl;

    ave1.get_element();
    cout << endl << "Sum of Double element: " << ave1.get_average() << endl;

    return 0;
}
