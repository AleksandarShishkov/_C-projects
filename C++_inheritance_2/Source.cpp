#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//This program demonstrates inheritence between 2 base classes and 1 derived class


class PersonalData												// base class #1
{
protected:

	string lName;												// a string to hold the last name
	string fName;												// a string to hold the first name
	string address;												// a string to hold the address
	string city;												// a string to hold the city name
	string ZIP;												// a string to hold the ZIP code
	int phone;												// an integer to hold the telephone number

public:

	PersonalData()												// default consructor
	{	}

	PersonalData(string _lName, string _fName, int _phone) :	                                        // overloaded constructor with three parameters
		lName(_lName), fName(_fName), phone(_phone)
	{

	}

	void set_lName()											// setter for the last name
	{
		cout << "\nEnter the last name : ";
		cin >> lName;
	}
	void set_fName()											// setter for the first name
	{
		cout << "\nEnter the first name : ";
		cin >> fName;
	}
	void set_address()											// setter for the address
	{
		cout << "\nEnter the address : ";
		getline(cin, address);
	}
	void set_city()												// setter for the city
	{
		cout << "\nEnter the city : ";
		cin >> city;
	}
	void set_ZIP()												// setter for the ZIP
	{
		cout << "\nEnter the ZIP code : ";
		cin >> ZIP;
	}
	void set_phone()											// setter for the phone number
	{
		cout << "\nEnter the phone number : ";
		cin >> phone;
	}
	string get_lName()											// getter for the last name
	{
		return lName;
	}
	string get_fName()											// getter for the first name
	{
		return fName;
	}
	string get_address()										       // getter for the address
	{
		return address;
	}
	string get_city()											// getter for the city
	{
		return city;
	}
	string get_ZIP()											// getter for the ZIP code
	{
		return ZIP;
	}
	int get_phone()												// getter for the phone number
	{
		return phone;
	}

	~PersonalData()												// destructor
	{	}


};


class CustomerData												// base class #2
{

protected:

	int custNum;												// an integer to hold the customer`s number
	bool mailingList;											// a boolean to hold the data for the mailing list preferences

public:

	CustomerData()												// default constructor
	{	}

	CustomerData(int _custNum) :custNum(_custNum)				                                // overloaded constructor with one parameter for the customer`s number
	{

	}

	void set_custNum()											// setter for the customer`s number
	{
		cout << "\nEnter the customer`s number (5 digits) : ";
		cin >> custNum;

		bool isValid = false;

		while (!isValid)
		{
			int count = 0;

			while (custNum != 0)
			{
				custNum /= 10;
				count++;
			}

			if (count != 5)
			{
				cout << "\nInvalid input. Try again (5 digits) : ";
				cin >> custNum;
			}
			else
				isValid = true;
		}
	}
	void set_mailingList()										        // setter for the mailing list information
	{
		char choice;

		cout << "\nIs the customer to be receiving emails? (y/n) : ";
		cin >> choice;

		while (choice != 'y' && choice != 'n')
		{
			cout << "\nInvalid input. Try again (y/n) : ";
			cin >> choice;
		}

		if (choice == 'y')
			mailingList = true;
		else
			mailingList = false;

	}
	int get_custNum()											// getter for the customer`s number
	{
		return custNum;
	}
	bool get_mailingList()										        // getter for the mailing list
	{
		return mailingList;
	}

	~CustomerData()												// destructor
	{	}

};


class PrefferedCustomer :										        // the derived class
	public PersonalData, public CustomerData
{

private:

	double amountSpent;											// a double to hold the amount spent
	double discount;											// a double to hold the discount

public:

	PrefferedCustomer()											// default constructor
	{	}

	PrefferedCustomer(double _amountSpent, string _lName,		// overloaded constructor with five parameters
		string _fName, int _phone, int _custNum) :PersonalData(),
		CustomerData()
	{
		amountSpent = _amountSpent;
		lName = _lName;
		fName = _fName;
		phone = _phone;
		custNum = _custNum;
	}

	void set_amountSpent()										         // setter for the amount spent
	{
		cout << "\nHow much is the amount spent : $";
		cin >> amountSpent;

		while (amountSpent < 0)
		{
			cout << "\nInvalid input. Try again : $";
			cin >> amountSpent;
		}
	}
	double get_amountSpent()									         // getter for the amount spent
	{
		return amountSpent;
	}
	double get_discount()										         // getter for the discount percentage
	{
		if (amountSpent <= 500)
		{
			discount = 5;
			return discount;
		}
		else if (amountSpent > 500 && amountSpent <= 1000)
		{
			discount = 6;
			return discount;
		}
		else if (amountSpent > 1000 && amountSpent <= 1500)
		{
			discount = 7;
			return discount;
		}
		else if (amountSpent >= 2000)
		{
			discount = 10;
			return discount;
		}
	}
	void print()												// print function
	{
		cout << "\nThe details for the customer are : \n\n";
		cout << "First name:         " << get_fName();
		cout << "\nLast name:          " << get_lName();
		cout << "\nCustomer number:    " << get_custNum();
		cout << "\nAddress:            " << get_address();
		cout << "\nCity:               " << get_city();
		cout << "\nZIP code:           " << get_ZIP();
		cout << "\nPhone:              " << get_phone();
		cout << "\nMailing list:       ";

		if (!get_mailingList())
			cout << "No";
		else
			cout << "Yes";
		cout << "\nAmount spent:       $" << get_amountSpent();
		cout << "\nDiscount earned:    " << get_discount() << "%\n";
	}


};



int main()
{
	PrefferedCustomer cust1(1500, "Simmons", "Sammuel", 1542021545, 12345), * cust2 = new PrefferedCustomer;

	cout << "\nEnter the details for customer #1:\n";
	cust1.set_address();
	cust1.set_city();
	cust1.set_ZIP();

	cust1.print();

	cout << "\nEnter the details for customer #2:\n";
	cust2->set_fName();
	cust2->set_lName();
	cust2->set_custNum();
	cin.get();
	cust2->set_address();
	cust2->set_city();
	cust2->set_ZIP();
	cust2->set_phone();
	cust2->set_mailingList();
	cust2->set_amountSpent();
	cust2->get_discount();

	cust2->print();




	delete cust2;



	return 0;
}
