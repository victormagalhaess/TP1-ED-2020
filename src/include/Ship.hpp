#ifndef SHIP
#define SHIP

namespace shipFight
{

    class Ship
    {
    private:
        int id;
        Ship *next;
        Ship *previous;

    public:
        int getId();
        void setId(int newId);
        Ship *getNext();
        void setNext(Ship *newNext);
        Ship *getPrevious();
        void setPrevious(Ship *newPrevious);
        Ship(int id);
        ~Ship();
    };

} // namespace shipFight

#endif