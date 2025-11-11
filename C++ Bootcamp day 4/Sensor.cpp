#include "Sensor.h"
#include <iostream>

Sensor::Sensor(int id, DeviceState initialState)
    : id(id), state(initialState)
{
    std::cout << "Sensor " << id << " constructed\n";
}

Sensor::~Sensor()
{
    std::cout << "Sensor " << id << " destroyed\n";
}

void Sensor::activate()
{
    state = DeviceState::Active;
}

void Sensor::deactivate()
{
    state = DeviceState::Idle;
}

DeviceState Sensor::getState() const
{
    return state;
}

std::string Sensor::toString() const
{
    switch (state) {
    case DeviceState::Idle:   return "Idle";
    case DeviceState::Active: return "Active";
    case DeviceState::Error:  return "Error";
    default:                  return "Unknown";
    }
}
