#include <iostream>
#include "./include/Ship.hpp"
#include "./include/List.hpp"
#include "./include/Queue.hpp"
#include "./include/Stack.hpp"

using namespace shipFight;

int main()
{
    Stack *storageShips = new Stack();
    int id;
    while (std::cin >> id)
    {
        storageShips->insert(new Ship(id));
    }

    storageShips->remove();

    return 0;
}