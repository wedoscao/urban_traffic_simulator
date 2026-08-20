#include "road.h"

const std::string& Road::getStartID() const {
    return startID;
};

const std::string& Road::getEndID() const {
    return startID;
};

float Road::getDistance() const {
    return distance;
};

int Road::getSpeedLimit() const {
    return speedLimit;
};

float Road::area() const {
    return distance * size;
};

bool Road::hasBlocked() const {
    return isBlocked;
};

void Road::block() {
    isBlocked = true;
};

void Road::unblock() {
    isBlocked = false;
};

void Road::setSpeedLimit(int speedLimit) {
    this->speedLimit = speedLimit;
};
