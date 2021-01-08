#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Employee												// base class Employee
{

protected:

	string emp_fName;										// string that holds the first name
	string emp_lName;										// string that holds the last name			
	int empNum;											// an int that holds the emp number
	string hireDate;										// a string that holds the hiring date


public:

	Employee()											// default constructor
	{	}

	Employee(string _fName, string _lName) : emp_fName(_fName), emp_lName(_lName)			// constructor with 2 string parameters for the first and last names
	{	}



	void set_fName()										// setter for the first name
	{
		cout << "\nEnter the first name : ";
		cin >> emp_fName;
	}
	void set_lName()										// setter for the last name
	{
		cout << "\nEner the last name : ";
		cin >> emp_lName;
	}
	void set_empNum()										// setter for the number
	{
		cout << "\nEnter the employee`s number (5 digits) : ";
		cin >> empNum;

		while (!validate_num(empNum))
		{
			cout << "\nInvalid input. Try again (5 digits) : ";
			cin >> empNum;
		}
	}
	bool validate_num(int num)									// validate the number
	{
		int count = 0;
		while (num != 0)
		{
			num /= 10;
			count++;
		}

		if (count != 5)
			return false;
		else
			return true;
	}
	void set_hireDate()										// setter for the hiring date
	{
		cout << "\nEnter the hiring date (day/month/year) : ";
		cin >> hireDate;
	}
	string get_fName()										// getter for the first name
	{
		return emp_fName;
	}
	string get_lName()										// getter for the last name
	{
		return emp_lName;
	}
	int get_empNum()										// getter for the number
	{
		return empNum;
	}
	string get_hireDate()										// getter for the hiring date
	{
		return hireDate;
	}
	void b_print()											// function for printing the results
	{
		cout << "\nThe details for '" << emp_fName << ' ' << emp_lName << "' are : \n\nFirst name: " << setw(10) << emp_fName
			<< "\nLast name: " << setw(12) << emp_lName << "\nNumber: " << setw(14) << empNum << "\nHiring date: " << setw(12) << hireDate;
	}

	~Employee()											// destructor
	{	}

};



class Worker :public Employee										// derived class Worker
{

private:

	int shift;
	double h_payRate;

public:

	Worker()											// default constructor
	{	}
	Worker(int _shift, string _fName, string _lName) :Employee(_fName, _lName)			// constructor with parameters for the shift, first and last names
	{
		shift = _shift;
		emp_fName = _fName;
		emp_lName = _lName;
	}
	void set_shift()										// setter for the shift with validation
	{
		cout << "\nEnter the shift (1 - day, 2 - night) : ";
		cin >> shift;

		while (shift != 1 && shift != 2)
		{
			cout << "\nInvalid input. Try again (1 - day, 2 - night) : ";
			cin >> shift;
		}
	}
	void set_h_payRate()										// setter for the pay rate with validation
	{
		cout << "\nEnter the hourly pay rate : $";
		cin >> h_payRate;

		while (h_payRate < 0)
		{
			cout << "\nInvalid input. Try again : $";
			cin >> h_payRate;
		}
	}
	void d_print()											// printing the results
	{
		b_print();
		double weekly_payRate = (h_payRate * 8) * 7;
		cout << setprecision(2) << fixed << showpoint;
		cout << "\nShift: " << setw(11) << shift << "\nWeekly pay rate: $" << setw(5) << weekly_payRate << '\n';
	}


};



int main()
{
	Worker* worker1 = new Worker;									// derived class pointer to worker1 object
	Worker worker2(1, "Susan", "Hudson");
	Worker* ptr_wker2 = &worker2;									// derived class pointer to worker2 object

													//details for worker 1

	cout << "\nEnter the details for employee 1: \n";

	worker1->set_fName();
	worker1->set_lName();
	worker1->set_empNum();
	worker1->set_hireDate();
	worker1->set_shift();
	worker1->set_h_payRate();
	worker1->d_print();


	//details for worker 2


	cout << "\nEnter the details for employee 2: \n";

	ptr_wker2->set_empNum();
	ptr_wker2->set_hireDate();
	ptr_wker2->set_h_payRate();
	ptr_wker2->d_print();






	return 0;
}
