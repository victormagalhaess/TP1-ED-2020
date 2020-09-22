#include "../include/Ship.hpp"
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
        void remove(int id);

        void setHead(Ship *newHead);
        Ship *getHead();
        void setTail(Ship *newTail);
        Ship *getTail();

        List();
        ~List();
    };

} // namespace shipFight

#endif