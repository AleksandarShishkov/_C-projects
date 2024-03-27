#ifndef NUMDAYS_H
#define	NUMDAYS_H

#include <iostream>															
#include <iomanip>															

using namespace std;															

class NumDays																
{
private:

	int numHours;															
	double numDays;															
public:

	NumDays(int);															

	void set_numHours();														
	int get_numHours();														

	void set_numDays();														
	double get_numDays();														

	NumDays operator+(NumDays& obj);												
	NumDays operator-(NumDays& obj);												
	NumDays operator++();														
	NumDays operator++(int);													

	NumDays operator--();														
	NumDays operator--(int);													


	~NumDays();															

};


#endif
