#ifndef FRESHFOOD_H
#define FRESHFOOD_H
#include"Products.h"												

class FreshFood :public Products										
{

private:

	double weight;												
	double pricePerKilo;											

public:

	FreshFood();												
	FreshFood(double, double, long int, string);								
														

	void set_weight();											
	double get_weight();											

	void set_pricePerKilo();										
	double get_pricePerKilo();										

	double getTotal();											

	void setCode() override;										
	void setName() override;										

	void scanner();												
	void printer() override;										



};


#endif
