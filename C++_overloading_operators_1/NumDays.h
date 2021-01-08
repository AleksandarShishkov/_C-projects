#ifndef NUMDAYS_H
#define	NUMDAYS_H

#include <iostream>															// including the iostream library
#include <iomanip>															// including iomanip library

using namespace std;															// using std namespace

class NumDays																// class NumDays definition
{
private:

	int numHours;															// an integer to hold the number of hours
	double numDays;															// adouble to hold the number of days

public:

	NumDays(int);															// overloaded constructor

	void set_numHours();														// setter for the hours
	int get_numHours();														// getter for the hours

	void set_numDays();														// setter for the days
	double get_numDays();														// getter for the days

	NumDays operator+(NumDays& obj);												// overloaded '+' operator
	NumDays operator-(NumDays& obj);												// overloade '-' operator

	NumDays operator++();														// overloaded prefix '++' operator
	NumDays operator++(int);													// overloaded postfix '++' operator

	NumDays operator--();														// overloaded prefix '--' operator
	NumDays operator--(int);													// overloaded postfix '--' operator


	~NumDays();															// destructor


};


#endif
