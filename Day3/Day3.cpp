#include <iostream>
#include <array>
#include <string>

enum class DeviceState {
    Idle,
    Active,
    Error
};

struct Sensor {
    std::string name;
    int reading;
    DeviceState state;
};

void printSensor(const Sensor& s) {
    std::cout << "Sensor: " << s.name
        << " | Reading: " << s.reading
        << " | State: ";

    switch (s.state) {
    case DeviceState::Idle:   std::cout << "Idle"; break;
    case DeviceState::Active: std::cout << "Active"; break;
    case DeviceState::Error:  std::cout << "Error"; break;
    }

    std::cout << std::endl;
}

int countErrors(const std::array<Sensor, 3>& sensors)
{
	int errorCount = 0;
    for (const auto& s: sensors)
    {
        if (s.state == DeviceState::Error)
			errorCount++;
    }
	return errorCount;
}


int main() {
    std::array<Sensor, 3> sensors = { {
        {"Temp", 72, DeviceState::Active},
        {"Pressure", 101, DeviceState::Idle},
        {"Voltage", 0, DeviceState::Error}
    } };

    for (const auto& s : sensors) {
        printSensor(s);

    }

    int errorCount = countErrors(sensors);  

    std::cout << "Error Count: " << errorCount << std::endl;

}
