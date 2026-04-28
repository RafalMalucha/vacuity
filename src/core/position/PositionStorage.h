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
            std::cout << positions.find(entity.id)->second.x << " | " << positions.find(entity.id)->second.y << std::endl;
            return positions.find(entity.id)->second;
        }

        void UpdateEntityPosition(Entity entity, float delta_x, float delta_y)
        {
            Position entityPosition = positions.find(entity.id)->second;
            entityPosition.x += delta_x;
            entityPosition.y += delta_y;
            positions.find(entity.id)->second = entityPosition;
        }

        void SetNewEntityPosition(Entity entity, Position newPosition)
        {
            positions.find(entity.id)->second = newPosition;
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
