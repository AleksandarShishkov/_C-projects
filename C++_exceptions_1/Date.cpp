#include "Date.h"													// including the Date header


Date::Date() :month(0), day(0), year(0)											// assigning default values to
{															// month, day and year

}

void Date::set_month()													// prompting the user to enter
{															// the month
	cout << "\nEnter the month: ";
	cin >> month;

	if (month < 1 || month>12)											// validating the input
		throw InvalidMonth(month);										// throwing the exception

}
void Date::set_day()													// prompting the user to enter
{															// the day
	cout << "\nEnter the day: ";
	cin >> day;

	if (day < 1 || day>31)												// validating the input
		throw InvalidDay(day);											// throwing the exception

}
void Date::set_year()													// prompting the user to enter
{															// the year
	cout << "\nEnter the year: ";
	cin >> year;

	if (year < 1000 || year > 9999)											// validating the input
		throw InvalidYear(year);										// throwing the exception
}


void Date::print_num()													// formatting the output
{
	cout << '\n' << month << "/" << day << "/" << year;

}
void Date::print_monthStr1()												// formating the output
{

	switch (month)													// using swith statement for 
	{														// validation and formatted output
	case January:
		cout << "\nJanuary " << day << ", " << year << '\n';
		break;

	case February:
		cout << "\February " << day << ", " << year << '\n';
		break;

	case March:
		cout << "\nMarch " << day << ", " << year << '\n';
		break;

	case April:
		cout << "\nApril " << day << ", " << year << '\n';
		break;

	case May:
		cout << "\nMay " << day << ", " << year << '\n';
		break;

	case June:
		cout << "\nJune " << day << ", " << year << '\n';
		break;

	case July:
		cout << "\nJuly " << day << ", " << year << '\n';
		break;

	case August:
		cout << "\nAuugust " << day << ", " << year << '\n';
		break;

	case September:
		cout << "\nSeptember " << day << ", " << year << '\n';
		break;

	case October:
		cout << "\nOctober " << day << ", " << year << '\n';
		break;

	case November:
		cout << "\nNovember " << day << ", " << year << '\n';
		break;

	case December:
		cout << "\nDecember " << day << ", " << year << '\n';
		break;

	}

}
void Date::print_monthStr2()												// formatting the output
{

	switch (month)													// using switch statement for 
	{														// for validation and formatted output
	case January:
		cout << day << " January " << year << '\n';
		break;

	case February:
		cout << day << " February " << year << '\n';
		break;

	case March:
		cout << day << " March " << year << '\n';
		break;

	case April:
		cout << day << " April " << year << '\n';
		break;

	case May:
		cout << day << " May " << year << '\n';
		break;

	case June:
		cout << day << " June " << year << '\n';
		break;

	case July:
		cout << day << " July " << year << '\n';
		break;

	case August:
		cout << day << " August " << year << '\n';
		break;

	case September:
		cout << day << " September " << year << '\n';
		break;

	case October:
		cout << day << " October " << year << '\n';
		break;

	case November:
		cout << day << " November " << year << '\n';
		break;

	case December:
		cout << day << " December " << year << '\n';
		break;

	}

}


Date::~Date()
{

}

