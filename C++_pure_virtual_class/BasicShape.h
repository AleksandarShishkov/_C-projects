


#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <iostream>										// including the iostream library
#include <cmath>										// includeing the cmath library

using namespace std;										// using the std namespace



class BasicShape										// defining pure virtual class BasicShape
{

protected:

	double area;										// a protected double to hold the area


public:


	double get_area();									// getter for the area
	virtual double calc_area() = 0;								// pure virtual function calc_area
	
	virtual ~BasicShape()									// virtual destructor
	{	}
};



#endif

