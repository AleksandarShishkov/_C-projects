#ifndef PACKAGE_H
#define PACKAGE_H


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Package													// base class Package
{

protected:

	string name_sender;											// a string to hold the sender`s name
	string name_recipient;											// a string to hold the recipient`s name
	string address_sender;											// a string to hold the sender`s address
	string address_recipient;										// a string to hold the recipient`s address
	string city_sender;											// a string to hold the sender`s city
	string city_recipient;											// a string to hold the recipient`s city
	string state_sender;											// a srting to hold the sender`s state
	string state_recipient;											// a string to hold the recipient`s state
	string ZIP_sender;											// a string to hold the sender`s ZIP code
	string ZIP_recipient;											// a string to hold the recipient`s ZIP code
	double weight_package;											// a double to hold the weight of the package
	double cost_per_kg;											// a double to hold the cost per kg

public:

	Package();												// default constructor
	Package(string, string, string, string);								// constructor with 4 parameters for the names and										  
														// addersses for both sneder and recipient

	void set_name_s();											// setter for the name of the sender
	void set_name_r();											// setter for the name of the recipient
	void set_address_s();											// setter for the address of the sender
	void set_address_r();											// setter for the address of the recipient
	void set_city_s();											// setter for the city of the sender
	void set_city_r();											// setter for the city of the recipient
	void set_state_s();											// setter for the state of the sender
	void set_state_r();											// setter for the state of the recipient
	void set_ZIP_s();											// setter for the ZIP of the sender
	void set_ZIP_r();											// setter for the ZIP of the recipient
	void set_weight_package();										// setter for the package`s weight
	void set_cost_per_kg();											// setter for the cost per kg

	virtual double calculateCost();										// virtual function for calculation of the
														// shipping cost by multiplying the weight by the cost per kg


	void print();												// print() function to print the result


	~Package();												// destructor

};


#endif
