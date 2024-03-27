


#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"										

class Circle :public BasicShape									
{

private:

	long center_x;										
	long center_y;										
	double radius;										

	const double pi = 3.14;									


public:


	Circle();										
	Circle(long, long, double);								
												


	class Exception_x									
	{

	private:

		long x;										


	public:

		void set_x(Circle& c)								
		{
			x = c.center_x;								
		}

		long get_x()									
		{
			return x;								
		}

	};

	class Exception_y									
	{
	private:

		long y;										

	public:

		void set_y(Circle& c)								
		{
			y = c.center_y;								
		}

		long get_y()									
		{
			return y;								
		}


	};

	class Exception_radius									
	{

	private:

		double _radius;									

	public:

		void set__radius(Circle& c)							
		{
			_radius = c.radius;							
		}

		double get__radius()								
		{
			return _radius;								
		}

	};

	void set_center_x();									
	void set_center_y();									
	void set_radius();									

	double get_center_x();									
	double get_center_y();									
			
	double calc_area();									


	~Circle();										

};




#endif
