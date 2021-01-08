#ifndef PRODUCTS_H
#define	PRODUCTS_H

#include <iostream>													// including the iostream library
#include <string>													// including the string library
#include<iomanip>													// including the iomanip library
using namespace std;													// using the std namespace


class Products														// base class Products
{

protected:

	long int barcode;												// a protected long to hold the barcode
	string name;													// a protected string to hold the name

public:

	Products();													// default constructor
	Products(long int, string);											// constructor with parameters for the barcode and the name


	virtual void setCode();												// virtual setter for the barcode
	int getCode();													// getter for the barcode

	virtual void setName();												// virtual setter for the name
	string getName();												// getter for the name

	virtual void scanner() = 0;											// pure virtual setter for the output

	virtual void printer();												// virtual printer for the output

	virtual ~Products();												// virtual destructor


};


#endif
