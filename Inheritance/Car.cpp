#include"Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
	numDoors = 0;
}

int Car::getDoors()
{
	return numDoors;
}

void Car::setDoors(int doorCount)
{
	numDoors = doorCount;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << numDoors << endl;
}