#include "../include/Queue.hpp"

using namespace shipFight;

Queue::Queue()
{
    this->head = NULL;
    this->tail = NULL;
}

Queue::~Queue() {}

void Queue::insert(Ship *shipToRepair)
{
    if (this->head == NULL)
    {
        this->setHead(shipToRepair);
        this->setTail(shipToRepair);
    }
    else
    {
        shipToRepair->setNext(this->head);
        this->head->setPrevious(shipToRepair);
        this->setHead(shipToRepair);
    }
}

Ship *Queue::remove()
{
    Ship *ship;
    if (this->tail != NULL)
    {
        if (this->tail->getId() == this->head->getId())
        {
            this->setHead(NULL);
        }
        ship = this->tail;
        this->setTail(this->tail->getPrevious());
        return ship;
    }
    return NULL;
}

void Queue::setHead(Ship *newHead)
{
    this->head = newHead;
    if (newHead != NULL)
    {
        this->head->setPrevious(NULL);
    }
}

Ship *Queue::getHead()
{
    return this->head;
}

void Queue::setTail(Ship *newTail)
{
    this->tail = newTail;
    if (newTail != NULL)
    {
        this->tail->setNext(NULL);
    }
}

Ship *Queue::getTail()
{
    return this->tail;
}

void Queue::printAllShips()
{
    Ship *ship = this->tail;
    while (ship != NULL)
    {
        std::cout << ship->getId() << std::endl;
        ship = ship->getPrevious();
    }
}