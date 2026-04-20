#include <iostream>
#include <vector>
#include <stdio.h>

#include "core/entity.h"
#include "core/position/position.h"

int main()
{
  Entity entity0;
  Entity entity1;
  Entity entity2;
  Entity entity3;

  std::vector<Entity> entities = {entity0, entity1, entity2, entity3};

  printf("hello, vacuity\n");

  for(Entity entity : entities)
  {
    std::cout << entity.id << std::endl;
  }

  std::cout << "------" << std::endl;

  Position testPos1;

  std::cout << testPos1.x << " " << testPos1.y << std::endl;

  Position testPos2;
  testPos2.x = 12.0f;
  testPos2.y = 13.0f;

  std::cout << testPos2.x << " " << testPos2.y << std::endl;

  std::cin.get();

  return 0;
}
