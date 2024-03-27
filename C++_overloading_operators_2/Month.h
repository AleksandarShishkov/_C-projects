#ifndef MONTH_H
#define MONTH_H


#include <iostream>										
#include <string>										
#include <fstream>



using namespace std;										

class Month											
{

private:

	string name;										
	int monthNum;										



public:

	Month();										
	Month(string);										
	Month(int);										

	void set_name();									
	string get_name();									

	void set_monthNum();									
	int get_monthNum();									

	Month operator++();									
	Month operator++(int);									
	Month operator--();									
	Month operator--(int);									

	void print();										


	friend ostream& operator<<(ostream&, Month&);						
	friend istream& operator>>(istream&, Month&);						


	~Month();										


};


#endif
