include "Products.h"


Products::Products() :barcode(0), name(" ")									
{

}

Products::Products(long int _barcode, string _name) :								  
	barcode(_barcode), name(_name)										
{

}

void Products::setCode()											
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

int Products::getCode()												
{
	return barcode;
}

void Products::setName()											
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

string Products::getName()											
{
	return name;
}

void Products::printer()											
{
	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\n";
}

Products::~Products()												
{

}
