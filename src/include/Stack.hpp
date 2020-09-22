#include "../include/Ship.hpp"
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
        void remove();
        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();

        Stack();
        ~Stack();
    };

} // namespace shipFight

#endif