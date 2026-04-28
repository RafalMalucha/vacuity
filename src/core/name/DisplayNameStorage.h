#ifndef DISPLAYNAME_STORAGE_H
#define DISPLAYNAME_STORAGE_H

#include <unordered_map>
#include <iostream>
#include <string>
#include "../Entity.h"
#include "DisplayName.h"

class DisplayNameStorage
{
    public:
        void Add(Entity entity, const DisplayName& dName)
        {
            displayNames[entity.id] = dName;
        }

        DisplayName GetEntityDisplayName(Entity entity)
        {
            std::cout << displayNames.find(entity.id)->second.displayName << std::endl;
            return displayNames.find(entity.id)->second;
        }

        void UpdateEntityDisplayName(Entity entity ,std::string dNameNew)
        {
            displayNames.find(entity.id)->second.displayName = dNameNew;
        }

        void TestPrintAllDisplayNames()
        {
            for(auto& [id, dName] : displayNames)
            {
                std::cout << "id: " << id << " | name: " << dName.displayName << std::endl;
            }
        }

    private:
        std::unordered_map<uint32_t, DisplayName> displayNames;
};

#endif
