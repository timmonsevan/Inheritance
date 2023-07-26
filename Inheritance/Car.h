#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int numDoors;
public:
	Car();
	int getDoors();
	void setDoors(int);
	void displayInfo();
};

#endif