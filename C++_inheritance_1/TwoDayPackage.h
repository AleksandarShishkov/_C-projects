#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"


class TwoDayPackage :public Package										
{

private:

	double flat_fee = 0.0;											


public:

	TwoDayPackage();											

	TwoDayPackage(double, string, string, string, string);							 
														



	void set_flat_fee();											


	virtual double calculateCost() override									
	{
		double total = (flat_fee + cost_per_kg) * weight_package;
		return total;
	}

	void print();												


};


#endif
