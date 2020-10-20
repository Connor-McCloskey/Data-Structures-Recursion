#pragma once
//Put all three sorting functions here (year, make, model)
#include <iostream>
using namespace std;

void SortVectorYear(vector<Vehicle>&);
void SortVectorMake(vector<Vehicle>&);
void SortVectorModel(vector<Vehicle>&);

void SortVectorYear(vector<Vehicle> &vehicles)
{
	cout << "Sorting by year..." << endl;
	int size = vehicles.size();
	int startScan, minIndex;
	int minValueYear;
	for (startScan = 0; startScan < size; startScan++)
	{
		minIndex = startScan;
		minValueYear = vehicles[startScan].getYear();
		Vehicle temp = vehicles[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (vehicles[index].getYear() < minValueYear)
			{
				minValueYear = vehicles[index].getYear();
				temp = vehicles[index];
				minIndex = index;
			}
		}
		vehicles[minIndex] = vehicles[startScan];
		vehicles[startScan] = temp;
		minValueYear = vehicles[startScan].getYear();
	}
	cout << "Sorting by year complete." << endl;
}

void SortVectorMake(vector<Vehicle> &vehicles)
{
	cout << "Sorting by make..." << endl;
	int size = vehicles.size();
	int startScan, minIndex;
	string minValueMake;
	for (startScan = 0; startScan < size; startScan++)
	{
		minIndex = startScan;
		minValueMake = vehicles[startScan].getMake();
		Vehicle temp = vehicles[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (vehicles[index].getMake() < minValueMake)
			{
				minValueMake = vehicles[index].getMake();
				temp = vehicles[index];
				minIndex = index;
			}
		}
		vehicles[minIndex] = vehicles[startScan];
		vehicles[startScan] = temp;
		vehicles[startScan].getMake() = minValueMake;
	}
	cout << "Sorting by make complete." << endl;
}

void SortVectorModel(vector<Vehicle> &vehicles)
{
	cout << "Sorting by model..." << endl;
	int size = vehicles.size();
	int startScan, minIndex;
	string minValueModel;
	for (startScan = 0; startScan < size; startScan++)
	{
		minIndex = startScan;
		minValueModel = vehicles[startScan].getModel();
		Vehicle temp = vehicles[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (vehicles[index].getModel() < minValueModel)
			{
				minValueModel = vehicles[index].getModel();
				temp = vehicles[index];
				minIndex = index;
			}
		}
		vehicles[minIndex] = vehicles[startScan];
		vehicles[startScan] = temp;
		vehicles[startScan].getModel() = minValueModel;
	}
	cout << "Sorting by model complete." << endl;
}