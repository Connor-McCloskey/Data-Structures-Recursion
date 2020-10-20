//Driver file
/*
NAME: Connor McCloskey
LAST DATE MODIFIED: 02/06/2017
ASSIGNMENT: Data Structures Homework 3
DESCRIPTION: This program demonstrates recursive functions.
STATUS: COMPLETE
COMMENTS: The program should be complete to all specifications.
*/

#include "recursive.h"
#include "SortingFunctions.h"
#include "vehicle.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	vector<Vehicle> vehicles;
	int size = 0;
	int importYear;
	string importMake;
	string importModel;
	char importDivide;
	int searchYear;
	string searchModel;
	Recursion searches;

	cout << "Opening input file..." << endl;

	inputFile.open("vehicletest.txt");

	if (inputFile.fail())
	{
		cout << "Error opening file." << endl;
	}

	while (!inputFile.eof())
	{
		//inputFile.ignore();
		//Reading in from the file into the Vehicle vector
		vehicles.push_back(Vehicle());
		inputFile >> importYear;
		vehicles[size].setYear(importYear);
		inputFile.ignore();
		getline(inputFile, importMake);
		vehicles[size].setMake(importMake);
		getline(inputFile, importModel);
		vehicles[size].setModel(importModel);
		inputFile >> importDivide;
		inputFile.ignore();
		size++;
	}

	inputFile.close();

	//Retrieving input for first search
	cout << "Ready. Please input the year you wish to search for (integer value): ";
	cin >> searchYear;

	//call sort by year function
	SortVectorYear(vehicles);

	int first = 0;
	int last = (size - 1);

	//search via recursive binary and print results
	int result;
	result = searches.binaryRecursiveInt(vehicles, searchYear, first, last);
	if (result == -1)
	{
		cout << "Year not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result].getYear() << endl;
		cout << "Make: " << vehicles[result].getMake() << endl;
		cout << "Model: " << vehicles[result].getModel() << endl;
	}

	cout << endl;

	//Retrieving input for second search
	string searchString;
	cin.ignore();
	cout << "Ready. Please input the make you wish to search for (string): ";
	getline(cin, searchString);

	//call sort by make function
	SortVectorMake(vehicles);
	
	//search via recursive binary and print results
	result = searches.binaryRecursiveMake(vehicles, searchString, first, last);
	if (result == -1)
	{
		cout << "Make not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result].getYear() << endl;
		cout << "Make: " << vehicles[result].getMake() << endl;
		cout << "Model: " << vehicles[result].getModel() << endl;
	}

	cout << endl;

	//Retrieving input for third search
	cout << "Ready. Please input the model you wish to search for (string): ";
	getline(cin, searchString);

	//call sort by model function
	SortVectorModel(vehicles);

	//search via recursive binary and print results
	double result2;
	result2 = searches.binaryRecursiveModel(vehicles, searchString, first, last);
	if (result2 == -1)
	{
		cout << "Model not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result2].getYear() << endl;
		cout << "Make: " << vehicles[result2].getMake() << endl;
		cout << "Model: " << vehicles[result2].getModel() << endl;
	}

	cout << endl;

	///***************************************\\\

	//Now, the program will repeat, but use the loop-based searches
	cout << "Now, the program will repeat, but instead of using recursive searches, we'll use a loop-based search." << endl;

	//Retrieving input for fourth search
	cout << "Ready. Please input the year you wish to search for (integer value): ";
	cin >> searchYear;

	//call sort by year function
	SortVectorYear(vehicles);

	//search via loop and print results
	result = searches.binaryLoopsYear(vehicles, searchYear);
	if (result == -1)
	{
		cout << "Year not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result].getYear() << endl;
		cout << "Make: " << vehicles[result].getMake() << endl;
		cout << "Model: " << vehicles[result].getModel() << endl;
	}

	cout << endl;

	//Retrieving input for fifth search
	cin.ignore();
	cout << "Ready. Please input the make you wish to search for (string): ";
	getline(cin, searchString);

	//call search for make function
	SortVectorMake(vehicles);

	//search via loop and print results
	result = searches.binaryLoopsMake(vehicles, searchString);
	if (result == -1)
	{
		cout << "Make not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result].getYear() << endl;
		cout << "Make: " << vehicles[result].getMake() << endl;
		cout << "Model: " << vehicles[result].getModel() << endl;
	}

	cout << endl;

	//Retrieving input for sixth search
	cout << "Ready. Please input the model you wish to search for (string): ";
	getline(cin, searchString);

	//call search for model function
	SortVectorModel(vehicles);

	//search via loop and print results
	result2 = searches.binaryLoopsModel(vehicles, searchString);
	if (result2 == -1)
	{
		cout << "Model not found." << endl;
	}
	else
	{
		cout << "Search successful. Printing entry..." << endl;
		cout << "Year: " << vehicles[result2].getYear() << endl;
		cout << "Make: " << vehicles[result2].getMake() << endl;
		cout << "Model: " << vehicles[result2].getModel() << endl;
	}

	cout << endl;

	cout << "Program complete. Have a nice day!" << endl << endl;
	return 0;

}