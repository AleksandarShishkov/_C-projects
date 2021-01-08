#include "Month.h"										// including the Month.h header file



Month::Month() :name("January"), monthNum(1)							// declaring the default constructor
{

}
Month::Month(string _name) : name(_name)							// declaring the overloaded constructor with string as a parameter 
{
	if (name == "January")									// and validating the result
		monthNum = 1;
	else if (name == "February")
		monthNum = 2;
	else if (name == "March")
		monthNum = 3;
	else if (name == "April")
		monthNum = 4;
	else if (name == "May")
		monthNum = 5;
	else if (name == "June")
		monthNum = 6;
	else if (name == "July")
		monthNum = 7;
	else if (name == "August")
		monthNum = 8;
	else if (name == "September")
		monthNum = 9;
	else if (name == "October")
		monthNum = 10;
	else if (name == "November")
		monthNum = 11;
	else if (name == "December")
		monthNum = 12;
	else
	{
		cout << "\nInvalid month\n";
		name = "None";
		monthNum = 0;
	}
}
Month::Month(int _monthNum) :monthNum(_monthNum)						// declaring the overloaded constructor with integer as a parameter
{
	if (monthNum == 1)									// validating the result
		name = "January";
	else if (monthNum == 2)
		name = "February";
	else if (monthNum == 3)
		name = "March";
	else if (monthNum == 4)
		name = "April";
	else if (monthNum == 5)
		name = "May";
	else if (monthNum == 6)
		name = "June";
	else if (monthNum == 7)
		name = "July";
	else if (monthNum == 8)
		name = "August";
	else if (monthNum == 9)
		name = "September";
	else if (monthNum == 10)
		name = "October";
	else if (monthNum == 11)
		name = "November";
	else if (monthNum == 12)
		name = "December";
	else
	{
		cout << "\nInvalid input\n";
		monthNum = 0;
		name = "None";
	}
}

void Month::set_name()										// declaring the setter for the name
{
	cout << "\nEnter the name of the month> ";
	cin >> name;
}
string Month::get_name()									// declaring the getter for the name
{
	return name;
}

void Month::set_monthNum()									// declaring the setter for the month`s number
{
	cout << "\nEnter the number of the month> ";
	cin >> monthNum;

	while (monthNum < 1 || monthNum>12)							// validating the input
	{
		cout << "\nInvalid input. Enter (1 - 12)> ";
		cin >> monthNum;
	}
}
int Month::get_monthNum()									// declaring the getter for the month`s number
{
	return monthNum;
}

Month Month::operator++()									// declaring the prefix '++' operator
{

	Month obj;
	this->monthNum = ++monthNum;
	if (monthNum == 13)									// validating the result
		monthNum = 1;
	return obj;
}
Month Month::operator++(int)									// declaring the postfix '++' operator
{

	Month obj;
	this->monthNum = monthNum++;
	if (monthNum == 13)									// validating the result
		monthNum = 1;
	return obj;
}
Month Month::operator--()									// declaring the prefix '--' operator
{

	Month obj;
	this->monthNum = --monthNum;
	if (monthNum == 0)									// validating the result
		monthNum = 12;
	return obj;

}
Month Month::operator--(int)									// declaring the postfix '--' operator
{

	Month obj;
	this->monthNum = monthNum--;
	if (monthNum == 0)									// validating the result
		monthNum = 12;
	return obj;
}

void Month::print()										// declaring the print function
{

	if (monthNum == 1)									// validating the output
		name = "January";
	else if (monthNum == 2)
		name = "February";
	else if (monthNum == 3)
		name = "March";
	else if (monthNum == 4)
		name = "April";
	else if (monthNum == 5)
		name = "May";
	else if (monthNum == 6)
		name = "June";
	else if (monthNum == 7)
		name = "July";
	else if (monthNum == 8)
		name = "August";
	else if (monthNum == 9)
		name = "September";
	else if (monthNum == 10)
		name = "October";
	else if (monthNum == 11)
		name = "November";
	else if (monthNum == 12)
		name = "December";

	cout << "\nThe month`s number is " << monthNum << '\n';
	cout << "The month`s name is " << name << "\n";
}

Month::~Month()											// declaring the destructor
{

}
