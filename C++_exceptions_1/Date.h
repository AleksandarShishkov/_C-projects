

#ifndef DATE_H														
#define DATE_H

#include <iostream>													// including <iostream> directive

using namespace std;													// using the namespace std

class Date														// defining class Date
{

private:

	int month;													// an integer to hold the month
	int day;													// an integer to hold the day
	int year;													// an integer to hold the year

	enum months {													// enumeration for the months
		January = 1, February, March,
		April, May, June, July, August, September, October, November,
		December
	};


public:

	Date();														// default constructor

	class InvalidDay												// declaring a class for 
	{														// the day exception
	public:
		int day;												// an integer to hold the day

	public:

		InvalidDay(int d)											// constructor with parameter
		{													// for the day
			day = d;
		}

		int get_day()												// getter for the day
		{
			return day;
		}
	};

	class InvalidMonth												// declarring a class for 
	{														// the month exception
	private:
		int month;												// an integer to hold the month

	public:

		InvalidMonth(int m)											// constructor with paramter
		{													// for the month
			month = m;
		}

		int get_month()												// getter for the month
		{
			return month;
		}


	};


	class InvalidYear												// declaring a class for
	{														// the year exception
	private:

		int year;												// an integer to hold the year

	public:

		InvalidYear(int y)											// constructor with parameter
		{													// for the year
			year = y;
		}

		int get_year()												// getter for the year
		{
			return year;
		}
	};



	void set_month();												// setter for the Date class month
	void set_day();													// setter for the Date class day
	void set_year();												// setter for the Date class day

	void print_num();												// function to print the date in
															// foramt month/day/year

	void print_monthStr1();												// function to print the date in
															// format string_month/day/year

	void print_monthStr2();												// function to print the date in
															// format day/string_month/year


	~Date();													// destructor



};



#endif

