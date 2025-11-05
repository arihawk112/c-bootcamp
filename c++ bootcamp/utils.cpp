#include "utils.h"
#include <iostream>
#include <string>

namespace Utils {
    void printMessage() {
        std::cout << "Hello from Utils!" << std::endl;
    }

    std::string getInputMessage() {
        std::string msg;
        std::cout << "Enter a message: ";
        std::getline(std::cin, msg);
        return msg;
    }

    std::string getUserName()
    {
        std::string msg;
		std::cout << "Enter you name: ";
		std::getline(std::cin, msg);
        return msg;
    }


}

namespace DoubleNamespaceTest {
    void printMessage() {
        std::cout << "This is a test function in DoubleNamespaceTest." << std::endl;
    }
}

namespace Sensors {
    void printMessage()
    {
        std::cout << "Sensors Active" << std::endl;
    }
}
