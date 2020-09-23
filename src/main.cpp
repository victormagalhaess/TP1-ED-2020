#include <iostream>
#include "./include/Ship.hpp"
#include "./include/List.hpp"
#include "./include/Queue.hpp"
#include "./include/Stack.hpp"
#define MAX_VALUE 5000

using namespace shipFight;

int main()
{
    int id;
    int numberOfShips;
    std::cin >> numberOfShips;

    if (numberOfShips > MAX_VALUE)
    {
        numberOfShips = MAX_VALUE;
    }

    Stack *storageShips = new Stack();
    Queue *repairShips = new Queue();
    List *warShips = new List();

    for (int i = 0; i < numberOfShips; i++)
    {
        std::cin >> id;
        storageShips->insert(new Ship(id));
    }

    while (std::cin >> id)
    {
        switch (id)
        {
        case -3:
            repairShips->printAllShips();
            continue;

        case -2:
            storageShips->printAllShips();
            continue;

        case -1:
            storageShips->insert(repairShips->remove());
            std::cout << "nave " << storageShips->getTail()->getId() << " consertada" << std::endl;
            continue;

        case 0:
            warShips->insert(storageShips->remove());
            std::cout << "nave " << warShips->getTail()->getId() << " em combate" << std::endl;
            continue;

        default:
            repairShips->insert(warShips->remove(id));
            std::cout << "nave " << id << " avariada" << std::endl;
            continue;
        }
    }

    return 0;
}