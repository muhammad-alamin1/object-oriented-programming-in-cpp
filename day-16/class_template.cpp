#include <iostream>

using namespace std;

template <class Data_type>
class X
{
private:
    int arr_size;
    Data_type t_arr[arr_size];

public:
    get_x(int x)
    {
        arr_size = x;
    }
    int member(Data_type a, Data_type b);
    ~X(void) {};
};

int main(void)
{
    X <int> x, x1, x2;  // Object Declaration
    X <double> y, y1, y2;  // Object Declaration

    return 0;
}
