#pragma once

#include "intersection.h"
#include "road.h"
#include "vehicle.h"
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

const float SAFE_DISTANCE = 5;

class RoadNetwork {
  private:
    std::unordered_map<std::string, Intersection> intersections;
    std::vector<Road> roads;
    std::vector<IVehicle> vehicles;

  public:
    float getDensity();
    bool canMove(const IVehicle& vehicle, const std::pair<float, float>& dest);
    float calcTravelCost(const IVehicle& vehicle);

    void addIntersection(const Intersection& intersection);
    void removeIntersection(std::string ID);

    void addRoad(const Road& road);

    /// Blocking instead of removing
    void removeRoad(const std::string& startID, const std::string& endID);
    void unblockRoad(const std::string& startID, const std::string& endID);

    std::vector<Road> getConnectedRoads(const std::pair<float, float>& src);
};
