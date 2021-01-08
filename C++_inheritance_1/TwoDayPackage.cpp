#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage() : flat_fee(0.0)
{

}
TwoDayPackage::TwoDayPackage(double _flat_fee, string _name_s, string _name_r, string _address_s, string _address_r) :
	Package(_name_s, _name_r, _address_s, _address_r)
{
	flat_fee = _flat_fee;

}
void TwoDayPackage::set_flat_fee()
{
	cout << "\nEnter the fee for the delivery : $";
	cin >> flat_fee;

	while (flat_fee < 0)
	{
		cout << "\nInvalid input. Try again : $";
		cin >> flat_fee;
	}

	cin.get();
}
void TwoDayPackage::print()
{
	Package::print();
	cout << setprecision(2) << fixed << showpoint;
	cout << "Delivery fee: $" << calculateCost() << "\n";
	cout << "\n##########################\n";
}
