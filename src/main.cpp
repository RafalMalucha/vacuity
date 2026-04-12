#include <iostream>
#include <vector>
#include <stdio.h>

#include "core/entity.h"

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

  std::cin.get();

  return 0;
}
