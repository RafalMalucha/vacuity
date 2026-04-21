#include "PositionStorage.h"
#include <iostream>

void PositionStorage::Add(Entity entity, const Position& position)
{
    positions[entity.id] = position;
}

void PositionStorage::TestPrintAllPositions()
{
    for(auto& [id, position] : positions)
    {
        std::cout << id << " " << position.x << " " << position.y << std::endl;
        //std::cout << item.second;
    }
}
