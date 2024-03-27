#ifndef PACKAGEDFOOD_H
#define PACKAGEDFOOD_H
#include "Products.h"												




class PackagedFood :public Products										
{

private:

	double pricePerUnit;											
	int numUnits;												

public:

	PackagedFood();												
	PackagedFood(double, long int, string);									
														

	void set_pricePerUnit();										
	double get_pricePerUnit();										

	void set_numUnits();											
	int get_numUnits();											

	double getTotal();											

	void setCode() override;										
	void setName() override;										
	void scanner();												
	void printer() override;										



};



#endif

