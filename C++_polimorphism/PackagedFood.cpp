#include "PackagedFood.h"											// including the PackagedFood header


PackagedFood::PackagedFood() : pricePerUnit(0.0)								// declaring the default constructor
{

}

PackagedFood::PackagedFood(double _pricePerUnit,								// declaring the overloaded constructor to
	long int _barcode, string _name) : Products(_pricePerUnit, _name)					// assign the parameters to the member variables
{
	pricePerUnit = _pricePerUnit;
}

void PackagedFood::set_pricePerUnit()										// declaring the setter for the price per unit
{
	cout << "\nEnter the price per unit for the product> ";
	cin >> pricePerUnit;

	while (pricePerUnit < 0)
	{
		cout << "\nInvalid input. Try again> ";
		cin >> pricePerUnit;
	}
}

double PackagedFood::get_pricePerUnit()										// declaring the getter for the price per unit
{
	return pricePerUnit;
}

void PackagedFood::set_numUnits()										// declaring the setter for the number of units
{
	cout << "\nEnter the number of the units> ";
	cin >> numUnits;

	if (numUnits <= 0)											// validating the input
		numUnits = 0;
}

int PackagedFood::get_numUnits()										// getter for the number of units
{
	return numUnits;
}

double PackagedFood::getTotal()											// declaring the getter for the total price
{
	return double(numUnits) * pricePerUnit;
}

void PackagedFood::setCode()											// overriding the setter for the barcode
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

void PackagedFood::setName()											// overriding the setter for the name
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

void PackagedFood::scanner()											// declaring the scanner
{
	char choice;
	cout << "\nDo you want to change any of the details (name, code, price) - y/n> ";
	cin >> choice;

	while (choice != 'y' && choice != 'n')									// validating the input
	{
		cout << "\nEnter 'y' for Yes or 'n' for No> ";
		cin >> choice;
	}

	if (choice == 'y')
	{
		cout << "\nName> ";
		cin >> name;
		cout << "\nBarcode> ";
		cin >> barcode;
		cout << "\nPrice per unit> ";
		cin >> pricePerUnit;

		while (pricePerUnit < 0)									// validating the inputted price
		{
			cout << "\nInvalid input. Try again> ";
			cin >> pricePerUnit;
		}
	}
	else
		cout << "\nNo change selected\n";

}

void PackagedFood::printer()											// overriding the virtual printer
{
	cout << setprecision(2);

	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\nPrice per unit: $" << pricePerUnit <<
		"\nTotal price: $" << getTotal() <<
		'\n';
}
