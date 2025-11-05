#pragma once
#include <iostream>
#include <string>

class Car
{
	private:
		std::string make;
		std::string model;
		int year;

	public:
		//constructor declaration
		Car(const std::string& carMake, const std::string& carModel, int carYear);

		//Method to create new car
		static Car createFromUserInput();

		//Get all car details
		void displayCarInfo() const;

		//getters for individual attributes
		std::string getMake() const;
		std::string getModel() const;
		int getYear() const;


		//setters for individual attributes
		std::string setMake(std::string& newMake);
		void promptSetMake();
		std::string setModel(std::string& newModel);
		int setYear(int newYear);

};

