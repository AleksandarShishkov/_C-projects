


#ifndef RECTANGLE_H
#define RECTANGBLE_H
#include "BasicShape.h"														// including the BasicShape header



class Rectangle : public BasicShape											// derived class Rectangle
{

private:

	long width;																// a long integer to hold the width
	long lenght;															// a long integer to hold the lenght


public:


	Rectangle();															// default constructor
	Rectangle(long, long);													// constructor with parameters for
																			// the width and the lenght
																				

	class Exception_width													// exceotion class for the width
	{
	private:

		long w;																// a long integer to hold the width

	public:

		void set_width(Rectangle& r)										// setter with parameter for the width
		{
			w = r.width;													// assigning the value to w
		}

		long get_width()													// getter for w
		{
			return w;														// returning w
		}

	};

	class Exception_lenght													// exception class for the lenght
	{

	private:

		long l;																// a long integer to hold the lenght

	public:

		void set_lenght(Rectangle& r)										// setter with parameter for the lenght
		{
			l = r.lenght;													// assigning the lenght to l
		}

		long get_lenght()													// getter for l
		{
			return l;														// returning l
		}
	};


	void set_width();														// setter for the width
	void set_lenght();														// setter for the lenght

	long get_width();														// getter for the width
	long get_lenght();														// getter for the lenght

	double calc_area();														// overriding the pure virtual function calc_area()

	~Rectangle();															// destructor


};



#endif