


#include "Rectangle.h"



Rectangle::Rectangle() :width(0), lenght(0)							
{												

}

Rectangle::Rectangle(long _width, long _lenght)
{
	if (_width <= 0)									
		throw Exception_width();							
	else if (_lenght <= 0)									
		throw Exception_lenght();							
	else
	{
		width = _width;									
		lenght = _lenght;								

		calc_area();									
	}	

}

void Rectangle::set_width()													
{
	cout << "\nEnter the rectangle`s width> ";						
	cin >> width;

	if (width < 0)										
		throw Exception_width();							
}
void Rectangle::set_lenght()
{
	cout << "\nEnter the rectangle`s lenght> ";						
	cin >> lenght;

	if (lenght < 0)										
		throw Exception_lenght();							
}

long Rectangle::get_width()
{
	return width;										
}
long Rectangle::get_lenght()
{
	return lenght;										
}	

double Rectangle::calc_area()
{
	area = double(width) * double(lenght);							
	return area;										
}

Rectangle::~Rectangle()										
{

}


