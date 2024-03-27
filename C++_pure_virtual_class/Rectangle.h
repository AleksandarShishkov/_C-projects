


#ifndef RECTANGLE_H
#define RECTANGBLE_H
#include "BasicShape.h"										



class Rectangle : public BasicShape								
{

private:

	long width;										
	long lenght;										


public:


	Rectangle();										
	Rectangle(long, long);									
												
																				

	class Exception_width									
	{
	private:

		long w;										

	public:

		void set_width(Rectangle& r)							
		{
			w = r.width;								
		}

		long get_width()								
		{
			return w;								
		}

	};

	class Exception_lenght									
	{

	private:

		long l;										

	public:

		void set_lenght(Rectangle& r)							
		{
			l = r.lenght;								
		}

		long get_lenght()								
		{
			return l;								
		}
	};


	void set_width();									
	void set_lenght();									

	long get_width();									
	long get_lenght();									
	double calc_area();									

	~Rectangle();										

};



#endif
