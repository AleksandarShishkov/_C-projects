


#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <iostream>										
#include <cmath>										

using namespace std;										



class BasicShape										
{

protected:

	double area;										


public:


	double get_area();									
	virtual double calc_area() = 0;									
	virtual ~BasicShape()									
	{	}
};



#endif

