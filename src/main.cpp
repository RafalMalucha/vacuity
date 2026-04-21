#include <iostream>
#include <stdio.h>

#include "core/Entity.h"
#include "core/position/Position.h"
#include "core/position/PositionStorage.h"

int main()
{
    printf("hello, vacuity\n");
    std::cout << "------" << std::endl;

    PositionStorage positionStorage;
    Entity entity0{21};

    std::cout << entity0.id << std::endl;
    std::cout << "------" << std::endl;

    Position testPos0{12.0f, 13.0f};

    std::cout << testPos0.x << " " << testPos0.y << std::endl;
    std::cout << "------" << std::endl;

    positionStorage.Add(entity0, testPos0);

    positionStorage.TestPrintAllPositions();

    std::cin.get();

    return 0;
}
