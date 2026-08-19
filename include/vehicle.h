#pragma once

#include <utility>

class IVehicle {
  public:
    virtual ~IVehicle() = default;
    virtual float getSpeed();
    virtual float getSize();
    virtual std::pair<float, float> getCoord();

    virtual void setCoord(const std::pair<float, float>& coord);
};
