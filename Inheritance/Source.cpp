// Evan Timmons
// CIS 1202 5T1
// 7/26/23
#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
using namespace std;



int main()
{
	string companyName;
	int yearBuilt;

	cout << "Enter the manufacturer: " << endl;
	getline(cin, companyName);
	cout << "Enter the year built: " << endl;
	cin >> yearBuilt;
	
	Vehicle vehicle1;
	vehicle1.setManufacturer(companyName);
	vehicle1.setYear(yearBuilt);
	vehicle1.displayInfo();



	return 0;
}