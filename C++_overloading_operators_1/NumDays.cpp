#include "NumDays.h"										


NumDays::NumDays(int _numHours) :numHours(_numHours)						
{												

}

void NumDays::set_numHours()									
{
	cout << "\nSet the number of the hours: ";
	cin >> numHours;
}

int NumDays::get_numHours()									
{
	return numHours;
}

double NumDays::get_numDays()									
{
	numDays = double(numHours) / 8;								
	return numDays;										
}

NumDays NumDays::operator+(NumDays& obj)							
{
	obj.numHours += this->numHours;
	return obj;
}

NumDays NumDays::operator-(NumDays& obj)							
{
	obj.numHours -= this->numHours;
	return obj;
}

NumDays NumDays::operator++()									
{
	++numHours;
	return NumDays(numHours);
}

NumDays NumDays::operator++(int)								
{
	NumDays h(numHours);
	numHours++;
	return h;
}

NumDays NumDays::operator--()									
{
	NumDays h(numHours);
	--numHours;
	return h;
}

NumDays NumDays::operator--(int)								
{
	NumDays h(numHours);
	numHours++;
	return h;
}

NumDays::~NumDays()										
{

}

