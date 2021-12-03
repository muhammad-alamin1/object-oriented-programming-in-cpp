#include <iostream>
#include <string.h>

using namespace std;

template <class Data_type>
void quick_sort(Data_type List[], int low, int high)
{
    int separator;

    if(low < high)
        separator =  separator(List, low, high); // divide list
    quick_sort(List, low, separator-1);
    quick_sort(List, separator+1, high);
}

template <class Data_type>
int separation(Data_type Value_list[], int LE, int HE)
{
    Data_type value, temp;
    int curr_posi, left_elem, right_elem;

    value = Value_list[LE];
    left_elem = LE;
    right_elem = HE;

    while(left_elem < right_elem)
    {
        while(Value_list[right_elem] > value)
            right_elem -=1;
        while((left_elem < right_elem)&& (Value_list[left_elem] <= value))
            left_elem +=1;

        if(left_elem < right_elem)
        {
            temp = Value_list[left_elem];
            Value_list[left_elem] = Value_list[right_elem];
            Value_list[right_elem] = temp;
        }
    }
    curr_posi = right_elem;
    temp = Value_list[LE];
    Value_list[LE] = Value_list[curr_posi];
    Value_list[curr_posi] = temp;

    return curr_posi;
}

int main(void)
{


    return 0;
}
