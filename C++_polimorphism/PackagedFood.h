#ifndef PACKAGEDFOOD_H
#define PACKAGEDFOOD_H
#include "Products.h"												// including the Products header file




class PackagedFood :public Products										// defining derived class PackagedFood
{

private:

	double pricePerUnit;											// a private double to hold the price per unit
	int numUnits;												// a private integer to hold the number of the units

public:

	PackagedFood();												// default constructor
	PackagedFood(double, long int, string);									// constructor with parameters for the price per unit,
														// the barcode and the name

	void set_pricePerUnit();										// setter for the price
	double get_pricePerUnit();										// getter for the price

	void set_numUnits();											// setter for the units
	int get_numUnits();											// getter for the units

	double getTotal();											// getter for the total price

	void setCode() override;										// overriding the virtual setter for the products barcode
	void setName() override;										// overiding the virtual setter for the products name

	void scanner();												// overiding the pure virtual scanner
	void printer() override;										// overriding the virtual printer



};



#endif

