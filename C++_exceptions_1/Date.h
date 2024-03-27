

#ifndef DATE_H														
#define DATE_H

#include <iostream>													

using namespace std;													

class Date														
{

private:

	int month;													
	int day;													
	int year;													

	enum months {													
		January = 1, February, March,
		April, May, June, July, August, September, October, November,
		December
	};


public:

	Date();														
	class InvalidDay												 
	{														
	public:
		int day;												

	public:

		InvalidDay(int d)											
		{													
			day = d;
		}

		int get_day()												
		{
			return day;
		}
	};

	class InvalidMonth												 
	{														
	private:
		int month;												

	public:

		InvalidMonth(int m)											
		{													
			month = m;
		}

		int get_month()												
		{
			return month;
		}


	};


	class InvalidYear												
	{														
	private:

		int year;												

	public:

		InvalidYear(int y)											
		{													
			year = y;
		}

		int get_year()												
		{
			return year;
		}
	};



	void set_month();												
	void set_day();													
	void set_year();												

	void print_num();												
															

	void print_monthStr1();												
															

	void print_monthStr2();												
															


	~Date();													



};



#endif

