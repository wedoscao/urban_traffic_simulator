#include "intersection.h"
#include <chrono>

bool TrafficLight::isStopping() {
    return currentColor == TrafficColor::Red;
};

void TrafficLight::updateLight() {
    auto currentTime = std::chrono::system_clock::now();

    switch (currentColor) {
    case TrafficColor::Red: {
        auto threshHold = lastUpdate + std::chrono::seconds(redTime);
        if (currentTime > threshHold) {
            lastUpdate = currentTime;
            currentColor = TrafficColor::Green;
        }
        break;
    }
    case TrafficColor::Green: {
        auto threshHold = lastUpdate + std::chrono::seconds(greenTime);
        if (currentTime > threshHold) {
            lastUpdate = currentTime;
            currentColor = TrafficColor::Yellow;
        }

        break;
    }
    case TrafficColor::Yellow: {
        auto threshHold = lastUpdate + std::chrono::seconds(yellowTime);
        if (currentTime > threshHold) {
            lastUpdate = currentTime;
            currentColor = TrafficColor::Red;
        }
        break;
    }
    }
};

const std::pair<float, float>& Intersection::getCoord() {
    return coord;
};

std::optional<TrafficLight> Intersection::getTrafficLight() {
    return trafficLight;
};
