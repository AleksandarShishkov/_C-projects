


#include "Circle.h"


																			
Circle::Circle() :center_x(0), center_y(0),							
radius(0.0)											
{

}

Circle::Circle(long _center_x, long _center_y, double _radius)				
{

	if (_center_x <= 0)									
		throw Exception_x();								
	else if (_center_y <= 0)								
		throw Exception_y();								
	else if (_radius <= 0)									
		throw Exception_radius();							
	else
	{
		center_x = _center_x;								
		center_y = _center_y;								
		radius = _radius;								

		calc_area();									
	}

}

void Circle::set_center_x()													
{
	
	cout << "\nEnter the circle`s center_x> ";						
	cin >> center_x;

	if (center_x < 0)									
		throw Exception_x();								
	

}
void Circle::set_center_y()
{
	cout << "\nEnter the circle`s center_y> ";						
	cin >> center_y;

	if (center_y < 0)									
		throw Exception_y();								
}
void Circle::set_radius()
{
	cout << "\nEnter the circle`s radius> ";						
	cin >> radius;

	if (radius < 0)										
		throw Exception_radius();							
}

double Circle::get_center_x()
{
	return center_x;									
}
double Circle::get_center_y()
{
	return center_y;									
}

double Circle::calc_area()
{
	area = pi * pow(radius, 2);								
	return area;										
}


Circle::~Circle()										
{

}



