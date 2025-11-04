#pragma once
#include <string>

namespace Utils {
    void printMessage();
    std::string getInputMessage();
    std::string getUserName();
}

namespace DoubleNamespaceTest
{
    void printMessage();
}

namespace Sensors
{
    void printMessage();
}
