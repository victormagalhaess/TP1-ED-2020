#include "../include/List.hpp"
#include <stdio.h>

using namespace shipFight;

List::List()
{
    this->head = NULL;
    this->tail = NULL;
}

List::~List() {}

void List::insert(Ship *shipToFight)
{
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

void List::remove(int id)
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
            break;
        }
        else
        {
            ship = ship->getNext();
        }
    }
}

void List::setHead(Ship *newHead)
{
    this->head = newHead;
    this->head->setPrevious(NULL);
}

Ship *List::getHead()
{
    return this->head;
}

void List::setTail(Ship *newTail)
{
    this->tail = newTail;
    this->tail->setNext(NULL);
}

Ship *List::getTail()
{
    return this->tail;
}