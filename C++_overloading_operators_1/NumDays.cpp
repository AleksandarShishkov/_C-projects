#include "NumDays.h"										// including the NumDays geader


NumDays::NumDays(int _numHours) :numHours(_numHours)						// defining the constructor
{												// setting numHours to user defined variable

}

void NumDays::set_numHours()									// setting the hours
{
	cout << "\nSet the number of the hours: ";
	cin >> numHours;
}

int NumDays::get_numHours()									// getting the hours
{
	return numHours;
}

double NumDays::get_numDays()									// setting the days
{
	numDays = double(numHours) / 8;								// calculating the result
	return numDays;										// return the result
}

NumDays NumDays::operator+(NumDays& obj)							// definition of the '+' operator
{
	obj.numHours += this->numHours;
	return obj;
}

NumDays NumDays::operator-(NumDays& obj)							// definition of the -' operator
{
	obj.numHours -= this->numHours;
	return obj;
}

NumDays NumDays::operator++()									// definition of the prefix '++' operator
{
	++numHours;
	return NumDays(numHours);
}

NumDays NumDays::operator++(int)								// definition of the postfix '++' operator
{
	NumDays h(numHours);
	numHours++;
	return h;
}

NumDays NumDays::operator--()									// definition of the prefix '--' operator
{
	NumDays h(numHours);
	--numHours;
	return h;
}

NumDays NumDays::operator--(int)								// definition of the postfix '--' operator
{
	NumDays h(numHours);
	numHours++;
	return h;
}

NumDays::~NumDays()										// defining the destructor
{

}

