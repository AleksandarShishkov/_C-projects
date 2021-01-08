#ifndef MONTH_H
#define MONTH_H


#include <iostream>										// including the input output libraty
#include <string>										// including the string library
#include <fstream>



using namespace std;										// using the std namespace

class Month											// defining class Month
{

private:

	string name;										// a string to hold the name of the month
	int monthNum;										// an integer to hold the number of the month



public:

	Month();										// default constructor
	Month(string);										// overloaded constructor with parameter for the name
	Month(int);										// overloaded constructor with parameter for the number

	void set_name();									// setter for the name
	string get_name();									// getter for the name

	void set_monthNum();									// setter for the number
	int get_monthNum();									// getter for the number

	Month operator++();									// overloaded prefix '++' operator
	Month operator++(int);									// overloaded postfix '++' operator
	Month operator--();									// overloaded prefix '--' operator
	Month operator--(int);									// overloaded postirx '--' operator

	void print();										// print() function to print the result


	friend ostream& operator<<(ostream&, Month&);						// friend overloaded ostream '<<' fucntion/ prototype
	friend istream& operator>>(istream&, Month&);						// friend overloaded istream '>>' function/ prototype


	~Month();										// destructor


};


#endif
