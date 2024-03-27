#include "Month.h"										



Month::Month() :name("January"), monthNum(1)							
{

}
Month::Month(string _name) : name(_name)							 
{
	if (name == "January")									
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
Month::Month(int _monthNum) :monthNum(_monthNum)						
{
	if (monthNum == 1)									
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

void Month::set_name()										
{
	cout << "\nEnter the name of the month> ";
	cin >> name;
}
string Month::get_name()									
{
	return name;
}

void Month::set_monthNum()									
{
	cout << "\nEnter the number of the month> ";
	cin >> monthNum;

	while (monthNum < 1 || monthNum>12)							
	{
		cout << "\nInvalid input. Enter (1 - 12)> ";
		cin >> monthNum;
	}
}
int Month::get_monthNum()									
{
	return monthNum;
}

Month Month::operator++()									
{

	Month obj;
	this->monthNum = ++monthNum;
	if (monthNum == 13)									
		monthNum = 1;
	return obj;
}
Month Month::operator++(int)									
{

	Month obj;
	this->monthNum = monthNum++;
	if (monthNum == 13)									
		monthNum = 1;
	return obj;
}
Month Month::operator--()									
{

	Month obj;
	this->monthNum = --monthNum;
	if (monthNum == 0)									
		monthNum = 12;
	return obj;

}
Month Month::operator--(int)									
{

	Month obj;
	this->monthNum = monthNum--;
	if (monthNum == 0)									
		monthNum = 12;
	return obj;
}

void Month::print()										
{

	if (monthNum == 1)									
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

Month::~Month()											
{

}
