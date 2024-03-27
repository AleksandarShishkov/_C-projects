
#include "Date.h"													


int main()
{

	Date* date = new Date;												
															

	try														
	{

		date->set_month();											
		date->set_day();											
		date->set_year();											


		date->print_num();											
		date->print_monthStr1();										
		date->print_monthStr2();

	}
	catch (Date::InvalidDay e)											
	{														
		cout << '\n' << e.get_day() <<
			" cannot be a valid day\n";
	}
	catch (Date::InvalidMonth m)											
	{														
		cout << '\n' << m.get_month() <<
			" cannot be a valid month!\n";
	}
	catch (Date::InvalidYear y)											
	{														
		cout << '\n' << y.get_year() <<
			" cannot be a valid year!\n";
	}



	return 0;													
}
