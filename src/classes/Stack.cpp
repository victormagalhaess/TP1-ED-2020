#include "../include/Stack.hpp"

using namespace shipFight;

Stack::Stack()
{
    this->head = NULL;
    this->tail = NULL;
}

Stack::~Stack() {}

void Stack::insert(Ship *shipToStorage)
{
    if (shipToStorage != NULL)
    {
        if (this->tail == NULL)
        {
            this->setHead(shipToStorage);
            this->setTail(shipToStorage);
        }
        else
        {
            shipToStorage->setPrevious(this->tail);
            this->tail->setNext(shipToStorage);
            this->setTail(shipToStorage);
        }
    }
}

Ship *Stack::remove()
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

void Stack::setHead(Ship *newHead)
{
    this->head = newHead;
    if (newHead != NULL)
    {
        this->head->setPrevious(NULL);
    }
}

Ship *Stack::getHead()
{
    return this->head;
}

void Stack::setTail(Ship *newTail)
{
    this->tail = newTail;
    if (newTail != NULL)
    {
        this->tail->setNext(NULL);
    }
}

Ship *Stack::getTail()
{
    return this->tail;
}

void Stack::printAllShips()
{
    Ship *ship = this->tail;
    while (ship != NULL)
    {
        std::cout << ship->getId() << std::endl;
        ship = ship->getPrevious();
    }
}