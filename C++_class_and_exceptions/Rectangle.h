



#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>												

using namespace std;												



class Rectangle
{

private:

	double lenght;												
	double width;												

public:

	Rectangle();												
	
	class Exception_lenght											
	{
	private:

		double l;											

	public:

		Exception_lenght(double lenght)									
		{												

			l = lenght;										
		}

		double get_l()											
		{
			return l;										
		}	
	};

	class Exception_width											
	{
	private:

		double w;																				

	public:

		Exception_width(double width)									
		{												

			w = width;										
		}

		double get_w()											
		{
			return w;										
		}
	};
	
	void set_lenght();											
	void set_width();											



	double get_area();											
	double get_perimeter();											
		
	~Rectangle();												

};


#endif


