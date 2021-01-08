#include "Package.h"




Package::Package()
{

}
Package::Package(string _name_s, string _name_r, string _address_s, string _address_r) :
	name_sender(_name_s), name_recipient(_name_r), address_sender(_address_s), address_recipient(_address_r)
{
	city_sender = " ";
	city_recipient = " ";
	state_sender = " ";
	state_recipient = " ";
	ZIP_sender = " ";
	ZIP_recipient = " ";
	weight_package = 0.0;
	cost_per_kg = 0.0;
}


void Package::set_name_s()
{
	cout << "\nEnter the name of the sender : ";
	getline(cin, name_sender);
}
void Package::set_name_r()
{
	cout << "\nEnter the name of the recipient : ";
	getline(cin, name_recipient);
}
void Package::set_address_s()
{
	cout << "\nEnter the address of the sender : ";
	getline(cin, address_sender);
}
void Package::set_address_r()
{
	cout << "\nEnter the address of the recipient : ";
	getline(cin, address_recipient);
}
void Package::set_city_s()
{
	cout << "\nEnter the name of the city of the sender : ";
	cin >> city_sender;
}
void Package::set_city_r()
{
	cout << "\nEnter the name of the city of the recipient : ";
	cin >> city_recipient;
}
void Package::set_state_s()
{
	cout << "\nEnter the state of the sender : ";
	cin >> state_sender;
}
void Package::set_state_r()
{
	cout << "\nEnter the state of the recipient : ";
	cin >> state_recipient;
}
void Package::set_ZIP_s()
{
	cout << "\nEnter the ZIP code of the sender : ";
	cin >> ZIP_sender;
}
void Package::set_ZIP_r()
{
	cout << "\nEnter the ZIP of the recipient : ";
	cin >> ZIP_recipient;
	cin.get();
}
void Package::set_weight_package()
{
	cout << "\nEnter the weight of the package in kg : ";
	cin >> weight_package;

	while (weight_package < 0)
	{
		cout << "\nInvalid input. Try again : ";
		cin >> weight_package;
	}
}
void Package::set_cost_per_kg()
{
	cout << "\nEnter the cost per kg : $";
	cin >> cost_per_kg;

	while (cost_per_kg < 0)
	{
		cout << "\nInvalid input. Try again : $";
		cin >> cost_per_kg;
	}

	cin.get();
}
double Package::calculateCost()
{
	double total = weight_package * cost_per_kg;
	return total;
}
void Package::print()
{
	cout << "\n########################## \n\nSender: " << setw(22) << name_sender << "\nAddress: " << setw(21) << address_sender << "\nCity: " <<
		setw(24) << city_sender << "\nState: " << setw(23) << state_sender << "\nZIP code: " << setw(20) << ZIP_sender << "\n\nReceiver: " <<
		setw(20) << name_recipient << "\nAddress: " << setw(21) << address_recipient << "\nCity: " << setw(24) << city_recipient << "\nState: " <<
		setw(23) << state_recipient << "\nZIP code: " << setw(20) << ZIP_recipient << "\n\n";
}
Package::~Package()
{

}
