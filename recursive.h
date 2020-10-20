#pragma once

//Declaration for the recursion class
#ifndef RECURSIVE_
#define RECURSIVE_

#include <vector>
#include "vehicle.h"

class Recursion
{
public:
	int binaryRecursiveInt(vector<Vehicle>, int, int, int);
	int binaryRecursiveMake(vector<Vehicle>, string, int, int);
	double binaryRecursiveModel(vector<Vehicle>, string, int, int);
	int binaryLoopsYear(vector<Vehicle>, int);
	int binaryLoopsMake(vector<Vehicle>, string);
	double binaryLoopsModel(vector<Vehicle>, string);
};

#endif
