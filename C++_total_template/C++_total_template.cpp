


		/*

		This program prompts the user to enter series of
		numbers (integers or doubles by the users choice) and 
		calculates their total. 

		With each iteration of the while loop
		the program stores the entered value in a template function
		called 'total' which keeps a running total and returns the total value
		once '-1' is entered.

		*/





#include <iostream>														// including the iostream directive

using namespace std;														// using the std namespace




template <class T>														// declaring template functiont total
T total(T num)
{
	static T total = 0;													// static total to keep the running total
	
	if (num == -1)														// validating the input
	{
		return total;
	}
	else
		total += num;													// adding the value entered to the total variable

}



int main()
{

	int numI = 0;														// an int to hold the integers
	double numD = 0;													// a double to hold the doubles
	
	int choice;														// an integer to hold the users choice

	cout << "\n\tChoose between the following: \n\n" <<									// a menu for the options
		"\t'1' for integer\n" <<
		"\t'2' for double\n" <<
		"\t'-1' to stop entering\n";
	cout << "> ";
	cin >> choice;														// prompting the user to enter the option selected

	switch (choice)														// using switch statement for the choice
	{
	case 1:

		while (numI != -1)												// entering the while loop
		{
			cout << "\nEnter an integer> ";										// prompting the user to enter a value
			cin >> numI;

			if (numI != -1)												// validating the input
				total(numI);											// passing the value to the 'total' template
			else
				cout << "\n\tThe total ot the entered integers is: " <<		// printing the result
				total(numI) << '\n';								
		}

		break;

	case 2:

		while (numD != -1)												// entering the while loop
		{
			cout << "\nEnter a double> ";										// prompting the user to enter a value
			cin >> numD;

			if (numD != -1)												// validating the input
				total(numD);											// passing the value to the 'total' template
			else
				cout << "\n\tThe total of the entered doubles is: " <<		// printing the result
				total(numD) << "\n";
		}

		break;

	default:														// validating the choice selected

		cout << "\nInvalid input. Try again!\n";
		break;
	}

	




	return 0;														// exiting the program
}
