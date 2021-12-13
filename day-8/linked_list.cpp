#include <iostream>
#include <string.h>

using namespace std;

class List_element
{
private:
    int i;

public:
    void set_value(int x)
    {
        i = x;
    }
    int get_value()
    {
        return i;
    }
    List_element *next;
};

class List
{
private:
    List_element *head;
    List_element *tail;
    List_element *new_node;

public:
    List()
    {
        head = NULL;
        tail = NULL;
        new_node = NULL;
    }

    // add node
    void add_node(int item)
    {
        new_node = new List_element;
        new_node->set_value(item);
        new_node->next = NULL;

        if(head != NULL)
            tail->next = new_node;
        else
            head = new_node;
        tail = new_node;
    }
};

int main(void)
{


    return 0;
}
