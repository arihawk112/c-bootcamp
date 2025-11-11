#pragma once
#include <string>

enum class DeviceState { Idle, Active, Error };

class Sensor {
public:
    Sensor(int id, DeviceState initialState);  // constructor
    ~Sensor();                                 // destructor

    void activate();
    void deactivate();
    DeviceState getState() const;
    std::string toString() const;

private:
    int id;
    DeviceState state;
};
