#include"Vehicle.h"
#include<iostream>
#include<string>
using namespace std;

Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

void Vehicle::setManufacturer(string company)
{
	manufacturer = company;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::setYear(int newYear)
{
	year = newYear;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}