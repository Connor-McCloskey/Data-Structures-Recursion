#pragma once
#ifndef vehicle_
#define vehicle_

#include <string>
using namespace std;

class Vehicle
{
private:
	int year;
	string make;
	string model;
public:
	Vehicle();
	void setYear(int _year);
	void setMake(string _make);
	void setModel(string _model);
	int getYear();
	string getMake();
	string getModel();
};

#endif