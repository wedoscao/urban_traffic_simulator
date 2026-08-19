#pragma once

#include <chrono>
#include <optional>
#include <string>
#include <utility>

enum TrafficColor { Red, Yellow, Green };

class TrafficLight {
  private:
    int redTime;
    int greenTime;
    const int yellowTime = 3;
    std::chrono::time_point<std::chrono::system_clock> lastUpdate;
    TrafficColor currentColor;

  public:
    bool isStopping();
    void updateLight();
};

class Intersection {
  private:
    std::string id;
    std::pair<float, float> coord;
    std::optional<TrafficLight> trafficLight;

  public:
    const std::pair<float, float>& getCoord();
    int countVehicle();
};
