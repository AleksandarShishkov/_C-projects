


#include "Rectangle.h"



Rectangle::Rectangle() :width(0), lenght(0)									// assigning default values to
{																			// the width and the lenght

}

Rectangle::Rectangle(long _width, long _lenght)
{
	if (_width <= 0)														// validating _width
		throw Exception_width();											// throwing an exception if invalid
	else if (_lenght <= 0)													// validating _lenght
		throw Exception_lenght();											// throwing an exception if invalid
	else
	{
		width = _width;														// assigning _width to width
		lenght = _lenght;													// assigning _lenght to lenght

		calc_area();														// calling the calc_area function
	}	

}

void Rectangle::set_width()													
{
	cout << "\nEnter the rectangle`s width> ";								// prompting the user to enter the width
	cin >> width;

	if (width < 0)															// validating the input
		throw Exception_width();											// throwing an exception if invalid
}
void Rectangle::set_lenght()
{
	cout << "\nEnter the rectangle`s lenght> ";								// prompting the user to enter the lenght
	cin >> lenght;

	if (lenght < 0)															// validating the input
		throw Exception_lenght();											// throwing an exception if invalid
}

long Rectangle::get_width()
{
	return width;															// returning the width
}
long Rectangle::get_lenght()
{
	return lenght;															// returning the lenght
}	

double Rectangle::calc_area()
{
	area = double(width) * double(lenght);									// calculating the area
	return area;															// returning the area
}

Rectangle::~Rectangle()														// declaring the destructor
{

}


