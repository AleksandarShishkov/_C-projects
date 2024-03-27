#include "FreshFood.h"											

FreshFood::FreshFood() : weight(0.0), pricePerKilo(0.0)							
{

}

FreshFood::FreshFood(double _weight, double _pricePerKilo,						
	long int _barcode, string _name) : Products(_barcode, _name)					
{
	weight = _weight;
	pricePerKilo = _pricePerKilo;
}

void FreshFood::set_weight()										
{
	cout << "\nEnter the weight> ";
	cin >> weight;

	while (weight < 0)										
	{
		cout << "\nInvalid input. Try again> ";
		cin >> weight;
	}
}

double FreshFood::get_weight()										
{
	return weight;
}

void FreshFood::set_pricePerKilo()									
{
	cout << "\nEnter the price per kilo> $";
	cin >> pricePerKilo;

	while (pricePerKilo < 0)									
	{
		cout << "\nInvalid input. Try again> $";
		cin >> pricePerKilo;
	}
}

double FreshFood::get_pricePerKilo()									
{
	return pricePerKilo;
}

double FreshFood::getTotal()										
{
	return pricePerKilo * weight;
}

void FreshFood::setCode()										
{
	cout << "\nEnter the barcode of the product> ";
	cin >> barcode;
}

void FreshFood::setName()										
{
	cout << "\nEnter the name of the product> ";
	cin >> name;
}

void FreshFood::scanner()										
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
		cout << "\nWeight> ";
		cin >> weight;

		while (weight < 0)									
		{
			cout << "\nInvalid input. Try again> ";
			cin >> weight;
		}

		cout << "\nPrice per kilo> $";
		cin >> pricePerKilo;

		while (pricePerKilo < 0)								
		{
			cout << "\nInvalid input. Try again> ";
			cin >> pricePerKilo;
		}
	}
	else
		cout << "\nNo change selected\n";
}

void FreshFood::printer()										
{

	cout << setprecision(2);

	cout << "\nName: " << name <<
		"\nCode: " << barcode <<
		"\nWeight: " << weight <<
		"\nPrice per kilo: $" << pricePerKilo <<
		"\nTotal price: $" << getTotal() <<
		'\n';
}

