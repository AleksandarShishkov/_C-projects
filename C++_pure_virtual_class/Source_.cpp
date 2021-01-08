



		/*

		This C++ program uses pure virtual class as a super-class
		which is inherited by two derived classes.

		It hold a pure virtual function which is overriden by the derived
		classes and calculates their objects areas.

		The values are validated trough exceptions.

		*/








#include "Circle.h"																// includeing the Circle header
#include "Rectangle.h"															// including the Rectangle header

#include <iomanip>																// including the iomanip library





int main()
{

	Circle* circle = new Circle;												// a pointer to Circle`s instance

	try
	{																			// entering the try block
																				// validating the input


		circle->set_center_x();													// calling the setter for the center_x
		circle->set_center_y();													// calling the setter for the center_y
		circle->set_radius();													// calling the setter for the radius
		circle->calc_area();													// calling calc_area() function


		cout << setprecision(2) << showpoint << fixed;							// formatting the output
		cout << "\nThe area of the cirle is : " << circle->get_area() <<		//printing the result
			'\n';

	}
	catch (Circle::Exception_x& x)												
	{
		cout << "\nCannot provide '" << x.get_x() << "' as center X\n";			// printing an error message if exception is thrown for the center_x
	}
	catch (Circle::Exception_y& y)
	{
		cout << "\nCannot provide '" << y.get_y() << "' as center Y\n";			// printing an error message if an exception is thrown for the center_y
	}
	catch (Circle::Exception_radius& r)
	{
		cout << "\nCannot provide '" << r.get__radius() << "' as radius\n";		// printing an error message if an exception is thrown for the radius
	}




	try
	{																			// entering the try block
																				// validating the input

		Circle* circle_p = new Circle(1, 15, 2.2);								// a pointer to Circle`s instance with parameters
																				// for the center_x, the center_y and the radius
		
		cout << "\nThe area of the cirle with parameters is : " <<				// printing the formatted output
			circle_p->get_area() << '\n';
	
	}
	catch (Circle::Exception_x& x)
	{
		cout << "\nInvalid value for the center_x: " << x.get_x() << '\n';		// printing an error message if an exception is thrown for the center_x
	}
	catch (Circle::Exception_y& y)
	{
		cout << "\nInvalid value for the center_y: " << y.get_y() << '\n';		// printing an error message if an exception is thrown for the center_y
	}
	catch (Circle::Exception_radius& r)
	{
		cout << "\nInvalid value for the radius: " << r.get__radius() << '\n';	// printing an error message if an exception is thrown for the radius
	}







	Rectangle* rectangle = new Rectangle;										// a pointer to Rectangle`s instance

	try
	{																			// entering the try block
																				// validating the input

		rectangle->set_width();													// calling the setter for the width
		rectangle->set_lenght();												// calling the setter for the lenght
		rectangle->calc_area();													// calling the calc_area() function

		cout << "\nThe rectangle`s area is '" << rectangle->get_area() <<		// printing the formatted output
			"'\n";


	}
	catch (Rectangle::Exception_width& w)
	{
		cout << "\nInvalid value for the width: " << w.get_width() << '\n';		// printing an error message if an exception is thrown for the width
	}
	catch (Rectangle::Exception_lenght& l)
	{
		cout << "\nInvalid value for the lenght: " << l.get_lenght() << '\n';	// printing an error message if an exception is thrown for the lenght
	}



	try
	{																			// entering the try block
																				// validating the input


		Rectangle* rectangle_p = new Rectangle(10, 20);							// a pointer to Rectangle`s instance with parameters for
																				// the width and the lenght

		cout << "\nThe area of the recatangle with parameters is '" <<			// printing the formatted output
			rectangle_p->get_area() << "'\n";

	}
	catch (Rectangle::Exception_width& w)
	{
		cout << "\nInvalid value for the width: " << w.get_width() << '\n';		// printing an error message if an exception is thrown for the width
	}
	catch (Rectangle::Exception_lenght& l)
	{
		cout << "\nInvalid value for the lenght: " << l.get_lenght() << '\n';	// printing an error message if an exception is thrown fot the lenght
	}


	cout << "\nThe program has ended\n";										// a message indicating that the program has ended


	delete circle, rectangle;													// releasing the allocated memory

	return 0;
}