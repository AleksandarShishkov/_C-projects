#ifndef PRODUCTS_H
#define	PRODUCTS_H

#include <iostream>													
#include <string>													
#include<iomanip>													
using namespace std;													


class Products														
{

protected:

	long int barcode;												
	string name;													

public:
	Products();													
	Products(long int, string);											


	virtual void setCode();												
	int getCode();													

	virtual void setName();												
	string getName();												

	virtual void scanner() = 0;											

	virtual void printer();												

	virtual ~Products();												

};


#endif
