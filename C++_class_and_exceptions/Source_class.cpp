



		/*
		 A C++ program which prompts the user to
		 enter the lenght and the width of a
		 rectangle and calculates it`s area
		 and perimeter.

		 The validation is managed trough an
		 exception handlers.

		 If no exceptions are caught the result
		 is printed on the screen.
		*/






#include "Rectangle.h"												// including the Rectangle`s class header
#include <iomanip>												// including iomanip for the setprecision() methond

int main()
{

	Rectangle* rectangle = new Rectangle;									// a pointer to the Rectangle`s class object

	double area;												// a double to hold the area
	double perimeter;											// a double to hold the perimeter


	try
	{
		rectangle->set_lenght();									// calling the setter for the lenght

		rectangle->set_width();										// calling the setter for the width

		area = rectangle->get_area();									// calculating the area, assigning it to the area variable
		perimeter = rectangle->get_perimeter();								// calculating the perimeter, assigning it to the perimeter variable

		cout << setprecision(2) << fixed << showpoint;							// formatting the outpu

		cout << "\n\tArea:        " << area;								// printing the area
		cout << "\n\tPerimeter:   " << perimeter;							// printing the perimeter
	}
	catch(Rectangle::Exception_lenght l)									// validating the lenght
	{
		cout << "\n'" << l.get_l() << "' isn`t " <<							// printing an erroneous message if an exception for the lenght
			"valid value for the lenght\n";								// is caught
	}
	catch (Rectangle::Exception_width w)									// validating the width
	{
		cout << "\n'" << w.get_w() << "' isn`t " <<							// printing an erroneous message if an exception for the width
			"valid value for the width\n";								// is caught
	}


	cout << "\n\nThe program has ended!\n";									// printing a message indicating the end of the program

	delete rectangle;											// freeing the allocated memory


	return 0;
}
