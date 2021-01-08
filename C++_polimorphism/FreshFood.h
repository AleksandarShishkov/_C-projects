#ifndef FRESHFOOD_H
#define FRESHFOOD_H
#include"Products.h"												// including the Products header file


class FreshFood :public Products										// defining derived class FreshFood
{

private:

	double weight;												// a private double to hold the weight
	double pricePerKilo;											// a private double to hold the price per kilo

public:

	FreshFood();												// default constructor
	FreshFood(double, double, long int, string);								// constructor with parameters for the weight, the price per kilo,
														// the barcode and the name

	void set_weight();											// setter for the weight
	double get_weight();											// getter for the weight

	void set_pricePerKilo();										// setter for the price per kilo
	double get_pricePerKilo();										// getter for the price per kilo

	double getTotal();											// getter for the total price

	void setCode() override;										// overriding the virtual setter for the products barcode
	void setName() override;										// overiding the virtual setter for the products name

	void scanner();												// overiding the pure virtual scanner
	void printer() override;										// overriding the virtual printer



};


#endif
