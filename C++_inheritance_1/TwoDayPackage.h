#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"


class TwoDayPackage :public Package										// derived class TwoDatPackage
{

private:

	double flat_fee = 0.0;											// a double to hold the additional delivery fee


public:

	TwoDayPackage();											// default constructor

	TwoDayPackage(double, string, string, string, string);							// overloaded constructor with an argument for the flat_fee 
														// that passes values to the base class constructor




	void set_flat_fee();											// setter for the fee


	virtual double calculateCost() override									// overriding the base calculateCost() function
	{
		double total = (flat_fee + cost_per_kg) * weight_package;
		return total;
	}

	void print();												// print() function to print the result


};


#endif
