#include "../include/Ship.hpp"

using namespace shipFight;

Ship::Ship(int id)
{
    this->id = id;
    this->next = NULL;
    this->previous = NULL;
}

Ship::~Ship() {}

int Ship::getId()
{
    return this->id;
}

void Ship::setId(int newId)
{
    this->id = newId;
}

Ship *Ship::getNext()
{
    return this->next;
}

void Ship::setNext(Ship *newNext)
{
    this->next = newNext;
}

Ship *Ship::getPrevious()
{
    return this->previous;
}

void Ship::setPrevious(Ship *newPrevious)
{
    this->previous = newPrevious;
}