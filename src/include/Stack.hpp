#include "../include/Ship.hpp"
#include <stdio.h>
#include <iostream>
#ifndef STACK
#define STACK

namespace shipFight
{
    class Stack
    {
    private:
        Ship *head;
        Ship *tail;

    public:
        void insert(Ship *shipToFight);
        Ship *remove();
        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();
        void printAllShips();

        Stack();
        ~Stack();
    };

} // namespace shipFight

#endif