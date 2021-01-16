



		/*
		 A C++ program that displays a menu
		 with options for the user to select.
 
		 Once the input is validated, the
		 program calculates the factorial of
		 the number inputed and prints it
		 on the screen.

		 Several data types are available.
 
		 A template function is used to 
		 make the calculations.
		 */








#include <iostream>
#include <iomanip>

using namespace std;



template <typename T>
T factorial(T num)																				// a template function to calculate the
{																								// factorial treough recursion
	if (num <= 1)
		return 1;
	else
		return num * factorial(num - 1);
}




int main()
{
	
	int numI;																					// an integer to hold the integer input
	long numL;																					// a long to hold the long input
	long long numLL;																			// a long long to hold the long long input
	double numD;																				// a double to hold the double input
	float numF;																					// a float to hold the float input

	int choice = 1;																				// an integer set to 1 to hold the choice

	while (choice != 0)
	{
																								// displaying the meny
		cout << "\n\tSelect between the following:\n";
		cout << "\n'1' for integer";
		cout << "\n'2' for long integer";
		cout << "\n'3' for long long integer";
		cout << "\n'4' for double";
		cout << "\n'5' for float";
		cout << "\n'0' to quit";
		cout << "\n\t> ";
		cin >> choice;

		cout << setprecision(2) << fixed << showpoint;											// formatting the output for the doubles and
																								// the floats


		
		switch (choice)																			// switching the choice
		{


		case 1:

			cout << "\nEnter an integer > ";													// prompting the user to enter an integer
			cin >> numI;

			if (numI < 1)																		// validating the input
				cout << "\nInvalid integer\n";
			else
				cout << "\nFactorial of !" << numI << " is: " << factorial(numI) << '\n';		// calling the template function

			break;

		case 2:

			cout << "\nEnter a long integer > ";
			cin >> numL;																		// prompting the user to enter a long

			if (numL < 1)																		// validating the input
				cout << "\nInvalid long integer\n";
			else
				cout << "\nFactorial of !" << numL << " is: " << factorial(numL) << '\n';		// calling the template function

			break;

		case 3:

			cout << "\nEnter a long long integer > ";
			cin >> numLL;																		// prompting the user to enter a long long

			if (numLL < 1)																		// validating the input
				cout << "\nInvalid long long integer\n";
			else
				cout << "\nFactorial of !" << numLL << " is: " << factorial(numLL) << '\n';		// calling the template function

			break;


		case 4:

			cout << "\nEnter a double > ";
			cin >> numD;																		// prompting the user to enter a double

			if (numD < 1.0)																		// validating the input
				cout << "\nInvalid double\n";
			else
				cout << "\nFactorial of !" << numD << " is: " << factorial(numD) << '\n';		// calling the template function

			break;


		case 5:

			cout << "\nEnter a float > ";
			cin >> numF;																		// prompting the user to enter a float

			if (numF < 1.0)																		// validating the input
				cout << "\nInvalid float\n";
			else
				cout << "\nFactorial of !" << numF << " is: " << factorial(numF) << '\n';		// calling the template function

			break;

		case 0:

			cout << "\nThe program has ended!\n\n";										// printing message indicating that the 
			break;																				// program has ended

		default:

			cout << "\nInvalid input. Try again\n";												// a default statement indicating that
			break;																				// the input is incorrect
		}

	}

	return 0;
}



