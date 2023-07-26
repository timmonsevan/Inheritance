#include"Truck.h"
#include<iostream>
using namespace std;

Truck::Truck()
{
	towingCapacity = 0;
}

double Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(double capacity)
{
	towingCapacity = capacity;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << " pounds" << endl;
}