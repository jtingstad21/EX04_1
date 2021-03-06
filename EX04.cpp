﻿// EX04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//PT -- 18/20

int main()
{
	int *x;
	cout << "Enter array size: " << endl;
	int SIZE;
	cin >> SIZE;

	x = new int[SIZE];

	cout << "Enter array values: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> x[i];
	}

	//calculate average
	int total = 0;
	for (int j = 0; j < SIZE; j++)
	{
		total = total + x[j];
	}
	//PT -- since total and SIZE are ints, you're performing integer division (eg. 5/2 is 2, not 2.5).
	//      also, avg should be a double.
	//  -2
	// double avg = static_cast<double>(total) / SIZE;
	int avg = total / SIZE;

	//find number of values above the average
	int above = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (x[i] > avg)
			above++;
	}

	cout << "number of values above the average = " << above << endl;

    return 0;
}

