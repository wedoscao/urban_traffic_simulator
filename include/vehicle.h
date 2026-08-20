#pragma once

#include <utility>

class IVehicle
{
protected:
  float size = 0.0f;
  std::pair<float, float> coord = {0.0f, 0.0f};

public:
  virtual ~IVehicle() = default;
  virtual float getSize();
  virtual std::pair<float, float> getCoord();

  virtual void setCoord(const std::pair<float, float> &coord);
};

class MovingVehicle : public IVehicle
{
protected:
  float speed = 0.0f;
  std::pair<float, float> destination = {0.0f, 0.0f};

public:
  virtual float getSpeed();
  virtual void setSpeed(float speed);

  virtual std::pair<float, float> getDestination();
  virtual void setDestination(const std::pair<float, float> &destination);
};
