#ifndef PACKAGE_H
#define PACKAGE_H


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Package													
{

protected:

	string name_sender;											
	string name_recipient;											
	string address_sender;											
	string address_recipient;										
	string city_sender;											
	string city_recipient;											
	string state_sender;											
	string state_recipient;											
	string ZIP_sender;											
	string ZIP_recipient;											
	double weight_package;											
	double cost_per_kg;											

public:

	Package();												
	Package(string, string, string, string);																		  
														

	void set_name_s();											
	void set_name_r();											
	void set_address_s();											
	void set_address_r();											
	void set_city_s();											
	void set_city_r();											
	void set_state_s();											
	void set_state_r();											
	void set_ZIP_s();											
	void set_ZIP_r();											
	void set_weight_package();										
	void set_cost_per_kg();											

	virtual double calculateCost();										
														


	void print();												


	~Package();												

};


#endif
