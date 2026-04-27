#ifndef POSITION_STORAGE_H
#define POSITION_STORAGE_H

#include <unordered_map>
#include <iostream>
#include "../Entity.h"
#include "Position.h"

class PositionStorage
{
    public:
        void Add(Entity entity, const Position& position)
        {
            positions[entity.id] = position;
        }

        Position GetEntityPosition(Entity entity)
        {
            std::unordered_map<uint32_t, Position>::const_iterator got = positions.find(entity.id);
            std::cout << got->second.x << " | " << got->second.y << std::endl;
            return got->second;
        }

        void TestPrintAllPositions()
        {
            for(auto& [id, position] : positions)
            {
                std::cout << "id: " << id << " | position: x: " << position.x << " y: " << position.y << std::endl;
            }
        }

    private:
        std::unordered_map<uint32_t, Position> positions;
};

#endif
