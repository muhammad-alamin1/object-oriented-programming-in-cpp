#include <iostream>

using namespace std;

template < class Data > Data sum(Data arr[], int size)
{
    Data sum = 0;
    int i;

    for(i=0; i<size; i++)
        sum += arr[i];
    return sum;
}

int main(void)
{
    int score[] = {70, 39, 43, 74, 90};
    double unit_price[] = {20.23, 50.50, 30.34};

    cout << "Sum of scores = " << sum(score, 5) << endl;
    cout << "Sum of Unit Price = " << sum(unit_price, 3) << endl;

    return 0;
}
