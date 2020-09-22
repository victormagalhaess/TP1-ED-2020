#include "../include/Ship.hpp"
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
        void remove();
        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();

        Queue();
        ~Queue();
    };

} // namespace shipFight

#endif