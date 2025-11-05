#include "Car.h"
#include <iostream>
#include <string>



Car::Car(const std::string& carMake, const std::string& carModel, int carYear)
{
	make = carMake;
	model = carModel;
	year = carYear;
}

void Car::displayCarInfo() const {
	std::cout << year << " " << make << " " << model << std::endl;
}

Car Car::createFromUserInput()
{
	std::string make, model;
	int year;

	std::cout << "Enter make: ";
	std::getline(std::cin, make);

	std::cout << "Enter model: ";
	std::getline(std::cin, model);

	std::cout << "Enter year: ";
	std::cin >> year;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return Car(make, model, year);
}

std::string Car::getMake() const
{
	return make;
}

std::string Car :: getModel() const
{
	return model;
}

int Car::getYear() const
{
	return year;
}

std::string Car::setMake(std::string& newMake)
{
	make = newMake;
	std::cout << "Make updated to: " << make << std::endl;
	return make;
}

void Car::promptSetMake()
{
	std::cout << "Enter new make (or type CANCEL to abort): ";

	std::string input;
	std::getline(std::cin, input);

	if (input == "CANCEL" || input == "cancel") {
		std::cout << "Make not changed.\n";
		return;
	}

	// Call your normal setter
	setMake(input);
}

std::string Car::setModel(std::string& newModel)
{
	model = newModel;
	std::cout << "Model updated to: " << model << std::endl;
	return model;
}

int Car::setYear(int newYear)
{
	year = newYear;
	std::cout << "Year updated to: " << year << std::endl;
	return year;
}