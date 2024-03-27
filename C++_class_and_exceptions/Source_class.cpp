


#include "Rectangle.h"												
#include <iomanip>												

int main()
{

	Rectangle* rectangle = new Rectangle;									

	double area;												
	double perimeter;											


	try
	{
		rectangle->set_lenght();									

		rectangle->set_width();										

		area = rectangle->get_area();									
		perimeter = rectangle->get_perimeter();								
		cout << setprecision(2) << fixed << showpoint;							

		cout << "\n\tArea:        " << area;								
		cout << "\n\tPerimeter:   " << perimeter;							
	}
	catch(Rectangle::Exception_lenght l)									
	{
		cout << "\n'" << l.get_l() << "' isn`t " <<							
			"valid value for the lenght\n";								
	}
	catch (Rectangle::Exception_width w)									
	{
		cout << "\n'" << w.get_w() << "' isn`t " <<							
			"valid value for the width\n";								
	}


	cout << "\n\nThe program has ended!\n";									

	delete rectangle;											


	return 0;
}
