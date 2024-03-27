#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//This program demonstrates inheritence between 2 base classes and 1 derived class


class PersonalData												
{
protected:

	string lName;												
	string fName;												
	string address;												
	string city;												
	string ZIP;												
	int phone;												

public:

	PersonalData()												
	{	}

	PersonalData(string _lName, string _fName, int _phone) :	                                        
		lName(_lName), fName(_fName), phone(_phone)
	{

	}

	void set_lName()											
	{
		cout << "\nEnter the last name : ";
		cin >> lName;
	}
	void set_fName()											
	{
		cout << "\nEnter the first name : ";
		cin >> fName;
	}
	void set_address()											
	{
		cout << "\nEnter the address : ";
		getline(cin, address);
	}
	void set_city()												
	{
		cout << "\nEnter the city : ";
		cin >> city;
	}
	void set_ZIP()												
	{
		cout << "\nEnter the ZIP code : ";
		cin >> ZIP;
	}
	void set_phone()											
	{
		cout << "\nEnter the phone number : ";
		cin >> phone;
	}
	string get_lName()											
	{
		return lName;
	}
	string get_fName()											
	{
		return fName;
	}
	string get_address()										       
	{
		return address;
	}
	string get_city()											
	{
		return city;
	}
	string get_ZIP()											
	{
		return ZIP;
	}
	int get_phone()												
	{
		return phone;
	}

	~PersonalData()												
	{	}


};


class CustomerData												
{

protected:

	int custNum;												
	bool mailingList;											
public:

	CustomerData()												
	{	}

	CustomerData(int _custNum) :custNum(_custNum)				                                
	{

	}

	void set_custNum()											
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
	void set_mailingList()										        
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
	int get_custNum()											
	{
		return custNum;
	}
	bool get_mailingList()										        
	{
		return mailingList;
	}

	~CustomerData()												
	{	}

};


class PrefferedCustomer :										        
	public PersonalData, public CustomerData
{

private:

	double amountSpent;											
	double discount;											

public:

	PrefferedCustomer()											
	{	}

	PrefferedCustomer(double _amountSpent, string _lName,		
		string _fName, int _phone, int _custNum) :PersonalData(),
		CustomerData()
	{
		amountSpent = _amountSpent;
		lName = _lName;
		fName = _fName;
		phone = _phone;
		custNum = _custNum;
	}

	void set_amountSpent()										         
	{
		cout << "\nHow much is the amount spent : $";
		cin >> amountSpent;

		while (amountSpent < 0)
		{
			cout << "\nInvalid input. Try again : $";
			cin >> amountSpent;
		}
	}
	double get_amountSpent()									         
	{
		return amountSpent;
	}
	double get_discount()										         
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
	void print()												
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
