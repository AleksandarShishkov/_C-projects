#include "OvernightPackage.h"


OvernightPackage::OvernightPackage() : fee_delivery(0.0)
{

}
OvernightPackage::OvernightPackage(double _fee_delivery, string _name_s, string _name_r, string _address_s, string _address_r) :
	Package(_name_s, _name_r, _address_s, _address_r)
{
	fee_delivery = _fee_delivery;
}
void OvernightPackage::set_fee_delivery()
{
	cout << "\nEnter the additional delivery fee : $";
	cin >> fee_delivery;

	while (fee_delivery < 0)
	{
		cout << "\nInvalid input. Try again : $";
		cin >> fee_delivery;
	}

	cin.get();
}
void OvernightPackage::print()
{
	Package::print();
	cout << setprecision(2) << fixed << showpoint;
	cout << "Delivery fee: $" << calculateCost() << "\n";
	cout << "\n##########################\n";
}
void OvernightPackage::nextPackage()
{
	char reply;

	cout << "\nAnother package (y/n) : ";
	cin >> reply;

	while (reply != 'y' && reply != 'n')
	{
		cout << "\nInvalid input. (y/n) : ";
		cin >> reply;
	}

	if (reply == 'n')
	{
		cout << "\nThe program`s terminated\n\n";
		exit(0);
	}
}
