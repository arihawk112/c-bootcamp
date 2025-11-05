#include <iostream>
#include "utils.h"
#include <string>
#include "Car.h"

int main() {
    Utils::printMessage();
    DoubleNamespaceTest::printMessage();
    Sensors::printMessage();
    std::string msg = Utils::getInputMessage();
    std::cout << "You entered: " << msg << std::endl;
	std::string name = Utils::getUserName();
    std::cout << "Hello, " << name << "!" << std::endl;

    Car myCar("BMW", "530i", 2003);
    Car tempCar = Car::createFromUserInput();

	myCar.displayCarInfo();
	tempCar.displayCarInfo();

    myCar.promptSetMake();
	myCar.displayCarInfo(); 
	


}