//Recursive class implementation

#include "recursive.h"
#include "vehicle.h"
#include <vector>
#include <iostream>
using namespace std;

//Recursive functions
int Recursion::binaryRecursiveInt(vector<Vehicle> vehicles, int searchValue, int first, int last)
{
	//searching for year
	int index = 0;

	if (first > last)
		index = -1;
	else
	{
		int mid = first + (last - first) / 2;
		if (searchValue == vehicles[mid].getYear())
		{
			index = mid;
		}
		else if (searchValue < vehicles[mid].getYear())
			index = binaryRecursiveInt(vehicles, searchValue, first, mid - 1);
		else
			index = binaryRecursiveInt(vehicles, searchValue, mid + 1, last);
	}
	return index;
}

int Recursion::binaryRecursiveMake(vector<Vehicle> vehicles, string searchValue, int first, int last)
{
	//searching for make
	int index = 0;
	
	if (first > last)
		index = -1;

	else
	{
		int mid = first + (last - first) / 2;
		if (searchValue == vehicles[mid].getMake())
		{
			index = mid;
		}
		else if (searchValue < vehicles[mid].getMake())
			index = binaryRecursiveMake(vehicles, searchValue, first, mid - 1);
		else
			index = binaryRecursiveMake(vehicles, searchValue, mid + 1, last);
	}
	return index;
}

double Recursion::binaryRecursiveModel(vector<Vehicle> vehicles, string searchValue, int first, int last)
{
	//searching for model
	int index = 0;

	if (first > last)
	{
		index = -1;
	}

	else
	{
		int mid = first + (last - first) / 2;
		if (searchValue == vehicles[mid].getModel())
		{
			index = mid;
		}
		else if (searchValue < vehicles[mid].getModel())
			index = binaryRecursiveModel(vehicles, searchValue, first, mid - 1);
		else
			index = binaryRecursiveModel(vehicles, searchValue, mid + 1, last);
	}
	return index;
}

int Recursion::binaryLoopsYear(vector<Vehicle> vehicles, int searchValue)
{
	int first = 0;
	int middle;
	int last = vehicles.size();
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (vehicles[middle].getYear() == searchValue)
		{
			found = true;
			position = middle;
		}
		else if (vehicles[middle].getYear() > searchValue)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}

	return position;
}

int Recursion::binaryLoopsMake(vector<Vehicle> vehicles, string searchValue)
{
	int first = 0;
	int middle;
	int last = vehicles.size();
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (vehicles[middle].getMake() == searchValue)
		{
			found = true;
			position = middle;
		}
		else if (vehicles[middle].getMake() > searchValue)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}

	return position;
}

double Recursion::binaryLoopsModel(vector<Vehicle> vehicles, string searchValue)
{
	int first = 0;
	int middle;
	int last = vehicles.size();
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (vehicles[middle].getModel() == searchValue)
		{
			found = true;
			position = middle;
		}
		else if (vehicles[middle].getModel() > searchValue)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}

	return position;
}