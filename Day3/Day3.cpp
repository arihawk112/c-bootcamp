#include <iostream>
#include <array>
#include <string>

enum class DeviceState {
    Idle,
    Active,
    Error
};
//commit test
struct Sensor {
    std::string name;
    int reading;
    DeviceState state;
};
//method to change any reading sensor to active state rather than idle, input not limited to 3 
void stateChanger(Sensor& s)
{
        if (s.reading > 0)
        {
            s.state = DeviceState::Active;
        }
        else 
        {
            s.state = DeviceState::Error;
        }
}

//DeviceState to string conversion fuctions.
std::string toString(DeviceState state)
{
    switch (state) {
    case DeviceState::Idle:   return "Idle";
    case DeviceState::Active: return "Active";
    case DeviceState::Error:  return "Error";
    default:                  return "Unknown";

	}
}


void printSensor(const Sensor& s) {
	std::string statetemp = toString(s.state);
    std::cout << "Sensor: " << s.name
        << " | Reading: " << s.reading
        << " | State: " << statetemp;

/*    switch (s.state) {
    case DeviceState::Idle:   std::cout << "Idle"; break;
    case DeviceState::Active: std::cout << "Active"; break;
    case DeviceState::Error:  std::cout << "Error"; break;
    }
            
    */
    std::cout << std::endl;
}
//added method to count sensors in Error state
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
    int test = 1;
    int test2 = 2;
    for (const auto& s : sensors) {
        printSensor(s);
    }

    int errorCount = countErrors(sensors);  

    std::cout << "Error Count: " << errorCount << std::endl;


    //call state changer method for each sensor 
    for (auto& s : sensors) {
        stateChanger(s);
    }

    for (const auto& s : sensors) {
        printSensor(s);
    }

}
