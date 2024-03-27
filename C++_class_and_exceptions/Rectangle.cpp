



#include "Rectangle.h"												


Rectangle::Rectangle() :lenght(1), width(1)									
{

}

void Rectangle::set_lenght()
{
	cout << "\nEnter the lenght of the rectangle (1.0 - 20.0)> ";						
	cin >> lenght;

	if (lenght < 1 || lenght > 20)										
		throw Exception_lenght(lenght);									
}

void Rectangle::set_width()
{
	cout << "\nEnter the width of the rectangle (1.0 - 20.0)> ";						
	cin >> width;

	if (width < 1 || width>20)										
		throw Exception_width(width);									
}

double Rectangle::get_area()
{
	double area = lenght * width;										
	return area;												
}

double Rectangle::get_perimeter()
{
	double perimeter = 2 * (lenght + width);								
	return perimeter;											
}

Rectangle::~Rectangle()
{

}

