#include "../include/Stack.hpp"
#include <stdio.h>

using namespace shipFight;

Stack::Stack()
{
    this->head = NULL;
    this->tail = NULL;
}

Stack::~Stack() {}

void Stack::insert(Ship *shipToStorage)
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

void Stack::remove()
{
    if (this->tail != NULL)
    {
        this->setTail(this->tail->getPrevious());
    }
}

void Stack::setHead(Ship *newHead)
{
    this->head = newHead;
    this->head->setPrevious(NULL);
}

Ship *Stack::getHead()
{
    return this->head;
}

void Stack::setTail(Ship *newTail)
{
    this->tail = newTail;
    this->tail->setNext(NULL);
}

Ship *Stack::getTail()
{
    return this->tail;
}