
#include "Circle.h"										
#include "Rectangle.h"										
#include <iomanip>										





int main()
{

	Circle* circle = new Circle;								

	try
	{											
												


		circle->set_center_x();								
		circle->set_center_y();								
		circle->set_radius();								
		circle->calc_area();								


		cout << setprecision(2) << showpoint << fixed;					
		cout << "\nThe area of the cirle is : " << circle->get_area() <<		
			'\n';

	}
	catch (Circle::Exception_x& x)												
	{
		cout << "\nCannot provide '" << x.get_x() << "' as center X\n";			
	}
	catch (Circle::Exception_y& y)
	{
		cout << "\nCannot provide '" << y.get_y() << "' as center Y\n";			
	}
	catch (Circle::Exception_radius& r)
	{
		cout << "\nCannot provide '" << r.get__radius() << "' as radius\n";		
	}




	try
	{											
												

		Circle* circle_p = new Circle(1, 15, 2.2);					
												
		
		cout << "\nThe area of the cirle with parameters is : " <<			
			circle_p->get_area() << '\n';
	
	}
	catch (Circle::Exception_x& x)
	{
		cout << "\nInvalid value for the center_x: " << x.get_x() << '\n';		
	}
	catch (Circle::Exception_y& y)
	{
		cout << "\nInvalid value for the center_y: " << y.get_y() << '\n';		
	}
	catch (Circle::Exception_radius& r)
	{
		cout << "\nInvalid value for the radius: " << r.get__radius() << '\n';		
	}







	Rectangle* rectangle = new Rectangle;							
	try
	{											
												

		rectangle->set_width();								
		rectangle->set_lenght();							
		rectangle->calc_area();								
		cout << "\nThe rectangle`s area is '" << rectangle->get_area() <<		
			"'\n";


	}
	catch (Rectangle::Exception_width& w)
	{
		cout << "\nInvalid value for the width: " << w.get_width() << '\n';		
	}
	catch (Rectangle::Exception_lenght& l)
	{
		cout << "\nInvalid value for the lenght: " << l.get_lenght() << '\n';		
	}



	try
	{											
												


		Rectangle* rectangle_p = new Rectangle(10, 20);					
												

		cout << "\nThe area of the recatangle with parameters is '" <<			
			rectangle_p->get_area() << "'\n";

	}
	catch (Rectangle::Exception_width& w)
	{
		cout << "\nInvalid value for the width: " << w.get_width() << '\n';		
	}
	catch (Rectangle::Exception_lenght& l)
	{
		cout << "\nInvalid value for the lenght: " << l.get_lenght() << '\n';		
	}


	cout << "\nThe program has ended\n";							


	delete circle, rectangle;								

	return 0;
}
