#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H

#include "Entity.h"
#include <cstdint>

class EntityManager
{
    public:
        Entity CreateEntity()
        {
            return Entity{nextEntityId++};
        }

    private:
        uint32_t nextEntityId = 0;
};

#endif
