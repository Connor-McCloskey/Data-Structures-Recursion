//This contains the class implemenation for vehicle
#include "vehicle.h"
#include <string>
using namespace std;

Vehicle::Vehicle()
{
	year = 0;
	make = "construction";
	model = "construction";
}

void Vehicle::setYear(int _year)
{
	year = _year;
}

void Vehicle::setMake(string _make)
{
	make = _make;
}

void Vehicle::setModel(string _model)
{
	model = _model;
}

int Vehicle::getYear()
{
	return year;
}

string Vehicle::getMake()
{
	return make;
}

string Vehicle::getModel()
{
	return model;
}