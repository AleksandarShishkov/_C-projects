



#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>												// including iostream directory

using namespace std;												// using the std namespace



class Rectangle
{

private:

	double lenght;												// a private double to hold the lenght
	double width;												// a private double to hold the width

public:

	Rectangle();												// default constructor

	
	class Exception_lenght											// exception class for the lenght
	{
	private:

		double l;											// a private double to hold the lenght

	public:

		Exception_lenght(double lenght)									// constructor with one paramter for
		{												// the lenght

			l = lenght;										// assigning the lenght to l
		}

		double get_l()											// getter for l
		{
			return l;										// returning l
		}	
	};

	class Exception_width											// exception class for the width
	{
	private:

		double w;											// a private double to hold the width									

	public:

		Exception_width(double width)									// constructor with one paramter for	
		{												// the lenght

			w = width;										// assigning the width to w
		}

		double get_w()											// getter for w
		{
			return w;										// returning w
		}
	};
	
	void set_lenght();											// setter for the lenght
	void set_width();											// setter for the width



	double get_area();											// getter for the area
	double get_perimeter();											// getter for the parameter
		
	~Rectangle();												// destructor

};


#endif


