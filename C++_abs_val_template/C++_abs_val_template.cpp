

			/*
			A program which prompts the user to enter
			an integer which is then passed as a reference
			to the 'abs' template function. The input is validated
			and the integers` absolute value is printed on the screen.
			*/





#include <iostream>																	// including the iostream directive
#include <stdlib.h>																	// including the stdlinb header file

using namespace std;																// using the std namespace




template <class T>																	// declaring template 'abs'
T abs(T num)																		// which accepts 1 parameter
{
	return abs(num);																// returning the absolute value of num
}

int main()																			
{

	int x = 1;																		// an integer to hold the users input


	while (x != 0)																	// entering the loop
	{
		cout << "\n Enter an integher (type 0 to quit)> ";							// prompting the user to enter an integer
		cin >> x;

		if (x == 0)																	// validating the input
			continue;

		cout << "\nThe absolute value of " << x << " is '" << abs(x) << "'\n";		// calling the abs function and printing the resul on the screen
	}

	cout << '\n';




	return 0;																		// exiting the program
}