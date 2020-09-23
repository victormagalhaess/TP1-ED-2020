#include "../include/List.hpp"

using namespace shipFight;

List::List()
{
    this->head = NULL;
    this->tail = NULL;
}

List::~List() {}

void List::insert(Ship *shipToFight)
{
    shipToFight->setPrevious(this->tail);
    if (this->tail != NULL)
    {
        this->tail->setNext(shipToFight);
        this->tail->getNext()->setPrevious(this->tail);
        this->setTail(this->tail->getNext());
    }
    else
    {
        this->tail = shipToFight;
        if (this->head == NULL)
        {
            this->head = shipToFight;
        }
    }
}

Ship *List::remove(int id)
{
    Ship *ship = this->getHead();
    while (ship != NULL)
    {
        if (id == ship->getId())
        {
            if (ship->getPrevious() != NULL)
            {
                ship->getPrevious()->setNext(ship->getNext());
            }
            if (ship->getNext() != NULL)
            {
                ship->getNext()->setPrevious(ship->getPrevious());
            }

            if (id == this->head->getId())
            {
                if (this->head->getNext() != NULL)
                {
                    this->setHead(this->head->getNext());
                }
                else
                {
                    this->head = NULL;
                }
            }

            if (id == this->tail->getId())
            {
                if (this->tail->getPrevious() != NULL)
                {
                    this->setTail(this->tail->getPrevious());
                }
                else
                {
                    this->tail = NULL;
                }
            }

            return ship;
        }
        else
        {
            ship = ship->getNext();
        }
    }
    return NULL;
}

void List::setHead(Ship *newHead)
{
    this->head = newHead;
    if (newHead != NULL)
    {
        this->head->setPrevious(NULL);
    }
}

Ship *List::getHead()
{
    return this->head;
}

void List::setTail(Ship *newTail)
{
    this->tail = newTail;
    if (newTail != NULL)
    {
        this->tail->setNext(NULL);
    }
}

Ship *List::getTail()
{
    return this->tail;
}