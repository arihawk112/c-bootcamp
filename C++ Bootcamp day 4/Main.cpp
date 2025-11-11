#include <iostream>
#include "Sensor.h"

int main()
{
    Sensor tempSensor(1, DeviceState::Idle);

    tempSensor.activate();

    std::cout << "Temp sensor: " << tempSensor.toString() << "\n";
}
