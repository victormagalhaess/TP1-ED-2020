#include "../include/Ship.hpp"
#include <stdio.h>
#ifndef LIST
#define LIST

namespace shipFight
{
    class List
    {
    private:
        Ship *head;
        Ship *tail;

    public:
        void insert(Ship *shipToFight);
        Ship *remove(int id);

        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();

        List();
        ~List();
    };

} // namespace shipFight

#endif