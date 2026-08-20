#pragma once

#include <string>

class Road {
  private:
    std::string name;
    std::string startID;
    std::string endID;
    float distance;
    float size;

    int speedLimit;
    bool isBlocked;

  public:
    const std::string& getStartID() const;
    const std::string& getEndID() const;
    float getDistance() const;
    int getSpeedLimit() const;
    float area() const;
    bool hasBlocked() const;

    void block();
    void setSpeedLimit(int speedLimit);
};
