


#include "Circle.h"


																			
Circle::Circle() :center_x(0), center_y(0),							// assigning default value for center_c,
radius(0.0)											// center_y and radius
{

}

Circle::Circle(long _center_x, long _center_y, double _radius)				
{

	if (_center_x <= 0)									// validating center_x
		throw Exception_x();								// throwing an exception if invalid
	else if (_center_y <= 0)								// validating center_y
		throw Exception_y();								// throwing an exception if invalid
	else if (_radius <= 0)									// validatiing radius
		throw Exception_radius();							// throwing an exception if invalid
	else
	{
		center_x = _center_x;								// assigning _center_x to center_x
		center_y = _center_y;								// assigning _center_y to center_y
		radius = _radius;								// assigning _radius to radius

		calc_area();									// calling calc_area() function
	}

}

void Circle::set_center_x()													
{
	
	cout << "\nEnter the circle`s center_x> ";						// prompting the user to enter the center_x
	cin >> center_x;

	if (center_x < 0)									// validating the input
		throw Exception_x();								// throwing an exception if invalid
	

}
void Circle::set_center_y()
{
	cout << "\nEnter the circle`s center_y> ";						// prompting the user to enter the center_y
	cin >> center_y;

	if (center_y < 0)									// validating the input
		throw Exception_y();								// throwing an exception if invalid
}
void Circle::set_radius()
{
	cout << "\nEnter the circle`s radius> ";						// prompting the user to enter the radius
	cin >> radius;

	if (radius < 0)										// validating the input
		throw Exception_radius();							// throwing an exception if invalid
}

double Circle::get_center_x()
{
	return center_x;									// returning the center_x
}
double Circle::get_center_y()
{
	return center_y;									// returning the center_y
}

double Circle::calc_area()
{
	area = pi * pow(radius, 2);								// calculating the area
	return area;										// returning the area
}


Circle::~Circle()										// declaring the destructor
{

}



