#include "vehicle.h"

float IVehicle::getSize()
{
    return size;
}

std::pair<float, float> IVehicle::getCoord()
{
    return coord;
}

void IVehicle::setCoord(const std::pair<float, float> &newCoord)
{
    coord = newCoord;
}

float MovingVehicle::getSpeed()
{
    return speed;
}

void MovingVehicle::setSpeed(float newSpeed)
{
    speed = newSpeed;
}

std::pair<float, float> MovingVehicle::getDestination()
{
    return destination;
}

void MovingVehicle::setDestination(
    const std::pair<float, float> &newDestination)
{
    destination = newDestination;
}
