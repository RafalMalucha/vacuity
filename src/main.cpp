#include <iostream>
#include <stdio.h>

#include "core/Entity.h"
#include "core/EntityManager.h"
#include "core/name/DisplayName.h"
#include "core/name/DisplayNameStorage.h"
#include "core/position/Position.h"
#include "core/position/PositionStorage.h"

int main()
{
    printf("hello, vacuity\n");
    std::cout << "------" << std::endl;

    EntityManager entityManager;
    DisplayNameStorage dNameStorage;
    PositionStorage positionStorage;

    Entity entity0 = entityManager.CreateEntity();
    Entity entity1 = entityManager.CreateEntity();
    Entity entity2 = entityManager.CreateEntity();

    std::cout << entity0.id << std::endl;
    std::cout << "------" << std::endl;

    Position testPos0{12.0f, 13.0f};

    std::cout << testPos0.x << " " << testPos0.y << std::endl;
    std::cout << "------" << std::endl;

    dNameStorage.Add(entity0, DisplayName{});
    dNameStorage.Add(entity1, DisplayName{"test1"});
    dNameStorage.Add(entity2, DisplayName{"asdf"});

    dNameStorage.TestPrintAllDisplayNames();

    positionStorage.Add(entity1, testPos0);
    positionStorage.Add(entity0, testPos0);
    positionStorage.Add(entity2, testPos0);

    positionStorage.TestPrintAllPositions();



    std::cin.get();

    return 0;
}
