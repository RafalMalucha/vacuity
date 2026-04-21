#ifndef POSITIONSTORAGE_H
#define POSITIONSTORAGE_H

#include <unordered_map>
#include "../Entity.h"
#include "Position.h"

class PositionStorage
{
    public:
        void Add(Entity entity, const Position& position);
        void TestPrintAllPositions();
    private:
        std::unordered_map<uint32_t, Position> positions;
};

#endif
