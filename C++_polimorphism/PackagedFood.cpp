#include "PackagedFood.h"											


PackagedFood::PackagedFood() : pricePerUnit(0.0)								
{

}

PackagedFood::PackagedFood(double _pricePerUnit,								
	long int _barcode, string _name) : Products(_pricePerUnit, _name)					
{
	pricePerUnit = _pricePerUnit;
}

void PackagedFood::set_pricePerUnit()										
{
	cout << "\nEnter the price per unit for the product> ";
	cin >> pricePerUnit;

	while (pricePerUnit < 0)
	{
		cout << "\nInvalid input. Try again> ";
		cin >> pricePerUnit;
	}
}

double PackagedFood::get_pricePerUnit()										
{
	return pricePerUnit;
}

void PackagedFood::set_numUnits()										
{
	cout << "\nEnter the number of the units> ";
	cin >> numUnits;

	if (numUnits <= 0)											
		numUnits = 0;
}

int PackagedFood::get_numUnits()										
{
	return numUnits;
}

double PackagedFood::getTotal()											
{
	return double(numUnits) * pricePerUnit;
}

void PackagedFood::setCode()											
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

void PackagedFood::setName()											
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

void PackagedFood::scanner()											
{
	char choice;
	cout << "\nDo you want to change any of the details (name, code, price) - y/n> ";
	cin >> choice;

	while (choice != 'y' && choice != 'n')									
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

		while (pricePerUnit < 0)									
		{
			cout << "\nInvalid input. Try again> ";
			cin >> pricePerUnit;
		}
	}
	else
		cout << "\nNo change selected\n";

}

void PackagedFood::printer()											
{
	cout << setprecision(2);

	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\nPrice per unit: $" << pricePerUnit <<
		"\nTotal price: $" << getTotal() <<
		'\n';
}
