#include "../include/Ship.hpp"
#include <stdio.h>
#include <iostream>
#ifndef QUEUE
#define QUEUE

namespace shipFight
{
    class Queue
    {
    private:
        Ship *head;
        Ship *tail;

    public:
        void insert(Ship *shipToRepair);
        Ship *remove();
        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();
        void printAllShips();

        Queue();
        ~Queue();
    };

} // namespace shipFight

#endif