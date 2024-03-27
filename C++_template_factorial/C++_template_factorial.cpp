

#include <iostream>
#include <iomanip>

using namespace std;



template <typename T>
T factorial(T num)													
{																								// factorial treough recursion
	if (num <= 1)
		return 1;
	else
		return num * factorial(num - 1);
}




int main()
{
	
	int numI;													
	long numL;													
	long long numLL;												
	double numD;													
	float numF;													

	int choice = 1;													

	while (choice != 0)
	{
															
		cout << "\n\tSelect between the following:\n";
		cout << "\n'1' for integer";
		cout << "\n'2' for long integer";
		cout << "\n'3' for long long integer";
		cout << "\n'4' for double";
		cout << "\n'5' for float";
		cout << "\n'0' to quit";
		cout << "\n\t> ";
		cin >> choice;

		cout << setprecision(2) << fixed << showpoint;								
															

		
		switch (choice)												
		{


		case 1:

			cout << "\nEnter an integer > ";								
			cin >> numI;

			if (numI < 1)											
				cout << "\nInvalid integer\n";
			else
				cout << "\nFactorial of !" << numI << " is: " << factorial(numI) << '\n';		

			break;

		case 2:

			cout << "\nEnter a long integer > ";
			cin >> numL;											

			if (numL < 1)											
				cout << "\nInvalid long integer\n";
			else
				cout << "\nFactorial of !" << numL << " is: " << factorial(numL) << '\n';		
			break;

		case 3:

			cout << "\nEnter a long long integer > ";
			cin >> numLL;											

			if (numLL < 1)											
				cout << "\nInvalid long long integer\n";
			else
				cout << "\nFactorial of !" << numLL << " is: " << factorial(numLL) << '\n';		

			break;


		case 4:

			cout << "\nEnter a double > ";
			cin >> numD;											

			if (numD < 1.0)											
				cout << "\nInvalid double\n";
			else
				cout << "\nFactorial of !" << numD << " is: " << factorial(numD) << '\n';		
			break;


		case 5:

			cout << "\nEnter a float > ";
			cin >> numF;											

			if (numF < 1.0)											
				cout << "\nInvalid float\n";
			else
				cout << "\nFactorial of !" << numF << " is: " << factorial(numF) << '\n';		

			break;

		case 0:

			cout << "\nThe program has ended!\n\n";								 
			break;												

		default:

			cout << "\nInvalid input. Try again\n";								
			break;												
		}

	}

	return 0;
}



