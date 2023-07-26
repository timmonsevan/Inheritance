#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:
	double towingCapacity;
public:
	Truck();
	double getTowingCapacity();
	void setTowingCapacity(double);
	void displayInfo();
};

#endif 

