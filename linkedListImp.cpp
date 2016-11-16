#include <iostream>
#include "linkedList.h"

linkedList::linkedList()
{
    head = nullptr;
    current = nullptr;
}

void linkedList::push(double info, int count, int max)
{
    bool full;

    full = isFull(count, max);

    if (full == false)
    {
        node *temp = new node;
        temp -> num = info;
        temp -> next = nullptr;
        if( head == nullptr)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current -> next = temp;
            current = temp;
        }
    }
    else if (full == true)
    {
        current -> next = nullptr;
        std::cout << "The List is Full." << std::endl;
    }

}

void linkedList::print()
{
    current = head;

    while (current != nullptr )
    {
            std::cout << current -> num << std::endl;
            current = current -> next;
    }
}

double linkedList::sum(int)
{
    return 0;
}

double linkedList::average()
{
    return 0;
}

double linkedList::minimum()
{
    return 0;
}

double linkedList::maximum()
{
    return 0;
}

bool linkedList::isFull(int count, int max)
{
    if (count < max)
        return false;
    else if (count == max)
        return true;

}

bool linkedList::isEmpty(int count)
{
    if (count == 0)
        return true;
    else
        return false;
}
