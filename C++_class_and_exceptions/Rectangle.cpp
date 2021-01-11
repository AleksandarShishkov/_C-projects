



#include "Rectangle.h"												// including the Rectangle`s class header


Rectangle::Rectangle() :lenght(1), width(1)									// assigning 1 to lenght and width
{

}

void Rectangle::set_lenght()
{
	cout << "\nEnter the lenght of the rectangle (1.0 - 20.0)> ";						// prompting the user to enter the lenght
	cin >> lenght;

	if (lenght < 1 || lenght > 20)										// validating the input
		throw Exception_lenght(lenght);									// throwing an exception if invalid
}

void Rectangle::set_width()
{
	cout << "\nEnter the width of the rectangle (1.0 - 20.0)> ";						// prompting the user to enter the width
	cin >> width;

	if (width < 1 || width>20)										// validating the input
		throw Exception_width(width);									// throwing exception if invalid
}

double Rectangle::get_area()
{
	double area = lenght * width;										// calculating the area
	return area;												// returning the value
}

double Rectangle::get_perimeter()
{
	double perimeter = 2 * (lenght + width);								// calculating the perimeter
	return perimeter;											// returning the value
}

Rectangle::~Rectangle()
{

}

