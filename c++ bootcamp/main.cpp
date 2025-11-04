#include <iostream>
#include "utils.h"

int main() {
    Utils::printMessage();
    DoubleNamespaceTest::printMessage();
    Sensors::printMessage();
    std::string msg = Utils::getInputMessage();
    std::cout << "You entered: " << msg << std::endl;
	std::string name = Utils::getUserName();
    std::cout << "Hello, " << name << "!" << std::endl;
}