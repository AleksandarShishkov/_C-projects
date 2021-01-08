

/*
	A simple C++ program that uses an exceptions
	to detect whether the inputted from the
	user data is valid or not.
	It uses multiple try-catch block to detect
	thrown exceptions. If no exception is catched
	the program prints the required output.
*/



#include "Date.h"													// including the Date header


int main()
{

	Date* date = new Date;												// a pointer to Date class`s
															// instance

	try														// enterint the try block
	{

		date->set_month();											// calling the setter for the month
		date->set_day();											// calling the setter for the day
		date->set_year();											// calling the setter for the year


		date->print_num();											// if no exception is catched
		date->print_monthStr1();										// printing the output
		date->print_monthStr2();

	}
	catch (Date::InvalidDay e)											// if an exception is catched for
	{														// the day printing an error message
		cout << '\n' << e.get_day() <<
			" cannot be a valid day\n";
	}
	catch (Date::InvalidMonth m)											// if an exception is catched for
	{														// the month printing an error message
		cout << '\n' << m.get_month() <<
			" cannot be a valid month!\n";
	}
	catch (Date::InvalidYear y)											// if an exception is catched for
	{														// the year printing an error message
		cout << '\n' << y.get_year() <<
			" cannot be a valid year!\n";
	}



	return 0;													// terminating the main() with '0'
}
