


#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"														// including the BasicShape header

class Circle :public BasicShape												// defining derived class Circle
{

private:

	long center_x;															// a long integer to hold the center_x
	long center_y;															// a long integer to hold the center_y
	double radius;															// a double to hold the circle`s radius

	const double pi = 3.14;													// a contant double pi


public:


	Circle();																// default constructor
	Circle(long, long, double);												// constructor with parameters for the center_x,
																			// the center_y and the radius


	class Exception_x														// exception class for the center_x
	{

	private:

		long x;																// a long integer to hold the value


	public:

		void set_x(Circle& c)												// setter with parameter for the center_x
		{
			x = c.center_x;													// assigning the value to x
		}

		long get_x()														// getter for x
		{
			return x;														// returning x
		}

	};

	class Exception_y														// exception class for the center_y
	{
	private:

		long y;																// a long integer to hold the value

	public:

		void set_y(Circle& c)												// setter with parameter for the center_y
		{
			y = c.center_y;													// assigning the value to y
		}

		long get_y()														// getter for y
		{
			return y;														// returning y
		}


	};

	class Exception_radius													// exception class for the radius
	{

	private:

		double _radius;														// a double to hold the value

	public:

		void set__radius(Circle& c)											// setter with paramterer for the radius
		{
			_radius = c.radius;												// assigning the value to _radius
		}

		double get__radius()												// getter for _radius
		{
			return _radius;													// returning _radius
		}

	};

	void set_center_x();													// setter for the center_x
	void set_center_y();													// setter for the center_y
	void set_radius();														// setter for the radius

	double get_center_x();													// getter for the center_x
	double get_center_y();													// getter for the center_y
			
	double calc_area();														// overriding the pure virtual function calc_area()


	~Circle();																// destructor

};




#endif