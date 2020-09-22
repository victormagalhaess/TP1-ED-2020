#include "../include/Queue.hpp"
#include <stdio.h>

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

void Queue::remove()
{
    if (this->tail != NULL)
    {
        this->setTail(this->tail->getPrevious());
    }
}

void Queue::setHead(Ship *newHead)
{
    this->head = newHead;
    this->head->setPrevious(NULL);
}

Ship *Queue::getHead()
{
    return this->head;
}

void Queue::setTail(Ship *newTail)
{
    this->tail = newTail;
    this->tail->setNext(NULL);
}

Ship *Queue::getTail()
{
    return this->tail;
}