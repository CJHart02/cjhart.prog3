#include <iostream>
#include <iomanip>
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
        current = nullptr;
        std::cout << "The List is Full." << std::endl;
    }

}

void linkedList::print(int count, int max)
{
    current = head;

    while (current != nullptr)
    {
        for (count = 0; count < max; count++)
        {
            std::cout << std::fixed << std::setprecision(3);
            std::cout << current -> num << std::endl;
            current = current -> next;
        }
    }
}

void linkedList::columnPrint(int count, int max)
{
    current = head;
    int rowCount;

    while (current != nullptr)
    {
        for (rowCount = 0; rowCount < max/5; rowCount++)
        {
            std::cout << std::fixed << std::setprecision(3);
            std::cout << std::setw(10) << current -> num;
            current = current -> next;
            std::cout << std::setw(10) << current -> num;
            current = current -> next;
            std::cout << std::setw(10) << current -> num;
            current = current -> next;
            std::cout << std::setw(10) << current -> num;
            current = current -> next;
            std::cout << std::setw(10) << current -> num << std::endl;
            current = current -> next;

        }
    }
}

void linkedList::printHead()
{
    std::cout << head << std::endl;
}

double linkedList::sum(int count, int max)
{
    current = head;
    double addition = 0;

    while (current != nullptr)
    {
        for (count = 0; count < max; count++)
        {
            addition = addition + current -> num;
            current = current -> next;
        }
    }
    return addition;
}

double linkedList::average(int count, int max) //current output of average function is 0
{
    current = head;
    double avg = 0;
    double addition = 0;
    while (current != nullptr)
    {
        for (count = 0; count < max; count++)
        {
            addition = addition + current -> num;
            current = current -> next;
        }
    }

    avg = addition / max;

    return avg;
}

double linkedList::minimum(int count, int max)
{
    current = head;
    double small = 99999;

    while (current != nullptr)
    {
        for (count = 0; count < max; count++)
        {
            if (current -> num <= small)
            {
                small = current -> num;
            }
            else
            {
                small = small;
            }
            current = current -> next;
        }
    }

    return small;
}

double linkedList::maximum(int count, int max)
{
    current = head;
    double big = 0;

    while (current != nullptr)
    {
        for (count = 0; count < max; count++)
        {
            if (current -> num >= big)
            {
                big = current -> num;
            }
            else
            {
                big = big;
            }
            current = current -> next;
        }
    }

    return big;
}

bool linkedList::isFull(int count, int max)
{
    if (count < max)
        return false;
    else if (count == max-1)
        return true;
}

bool linkedList::isEmpty(int count)
{
    if (count == 0)
        return true;
    else
        return false;
}
