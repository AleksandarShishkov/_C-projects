include "Products.h"


Products::Products() :barcode(0), name(" ")									// declaring the default constructor
{

}

Products::Products(long int _barcode, string _name) :								// declaring the overloaded constructor to assign  
	barcode(_barcode), name(_name)										// the parameters to the member variables
{

}

void Products::setCode()											// declaring the setter for the barcode
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

int Products::getCode()												// declaring the getter for the barcode
{
	return barcode;
}

void Products::setName()											// declaring the setter for the name
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

string Products::getName()											// declaring the getter for the name
{
	return name;
}

void Products::printer()											// declaring the virtual printer function
{
	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\n";
}

Products::~Products()												// declaring the virtual destructor
{

}
