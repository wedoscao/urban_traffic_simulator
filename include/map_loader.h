#pragma once

#include "road_network.h"
#include <string>

class ILoader {
  public:
    virtual RoadNetwork load(std::string path);
    virtual void save(std::string path);
};
