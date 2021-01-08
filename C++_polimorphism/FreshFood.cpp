#include "FreshFood.h"											// including the FreshFood header


FreshFood::FreshFood() : weight(0.0), pricePerKilo(0.0)							// declaring the default constructor
{

}

FreshFood::FreshFood(double _weight, double _pricePerKilo,						// declaring the overloaded constructor to
	long int _barcode, string _name) : Products(_barcode, _name)					// assigne the parameters to the member variables
{
	weight = _weight;
	pricePerKilo = _pricePerKilo;
}

void FreshFood::set_weight()										// declaring the setter for the weight
{
	cout << "\nEnter the weight> ";
	cin >> weight;

	while (weight < 0)										// validating the input
	{
		cout << "\nInvalid input. Try again> ";
		cin >> weight;
	}
}

double FreshFood::get_weight()										// declaring the getter for the weight
{
	return weight;
}

void FreshFood::set_pricePerKilo()									// declaring the setter for the price per kilo
{
	cout << "\nEnter the price per kilo> $";
	cin >> pricePerKilo;

	while (pricePerKilo < 0)									// validating the input
	{
		cout << "\nInvalid input. Try again> $";
		cin >> pricePerKilo;
	}
}

double FreshFood::get_pricePerKilo()									// declaring the getter for the price per kilo
{
	return pricePerKilo;
}

double FreshFood::getTotal()										// declaring the getter for the total price
{
	return pricePerKilo * weight;
}

void FreshFood::setCode()										// overriding the setter for the barcode
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

void FreshFood::setName()										// overriding the setter for the name
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

void FreshFood::scanner()										// declaring the scanner
{
	char choice;
	cout << "\nDo you want to change any of the details (name, code, price) - y/n> ";
	cin >> choice;

	while (choice != 'y' && choice != 'n')								// validating the input
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
		cout << "\nWeight> ";
		cin >> weight;

		while (weight < 0)									// validating the inputted weight
		{
			cout << "\nInvalid input. Try again> ";
			cin >> weight;
		}

		cout << "\nPrice per kilo> $";
		cin >> pricePerKilo;

		while (pricePerKilo < 0)								// validating the inputted price
		{
			cout << "\nInvalid input. Try again> ";
			cin >> pricePerKilo;
		}
	}
	else
		cout << "\nNo change selected\n";
}

void FreshFood::printer()										// overriding the virtual printer
{

	cout << setprecision(2);

	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\nWeight: " << weight <<
		"\nPrice per kilo: $" << pricePerKilo <<
		"\nTotal price: $" << getTotal() <<
		'\n';
}

