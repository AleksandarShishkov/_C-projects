


		/*

		This program prompts the user to enter
		three integers and calculates which of
		the inputted numbers is the greatest and which
		one is the least using templates.

		*/



#include <iostream>													// including iostream directive

using namespace std;													// using the std namespace


template <class T>													// declaring template with
T maximum(T num1, T num2, T num3)											// three parameters
{
	return (num1 > num2 && num1 > num3) ? num1 :									// using ternary operator
		(num2 > num1 && num2 > num3) ? num2 : num3;								// to calculate the greatest than
}															// the three


template <class T>													// declaring template with
T minimum(T num1, T num2, T num3)											// three parameters
{
	return (num1 < num2&& num1 < num3) ? num1 :									// using ternary pperator
		(num2 < num1&& num2 < num3) ? num2 : num3;								// to calculate the least than
}															// the three
	
	
int main()														// the main() function
{

	int x;														// an integer to hold num1
	int y;														// an integer to hold num2
	int z;														// an integer to hold num3

	cout << "\nEnter 3 integers > ";										// prompting the user to enter
	cin >> x >> y >> z;												// three integers

	cout << "\n\tThe greater than the three is '" <<								// calling the maximum template
		maximum(x, y, z) << "'\n";

	cout << "\tThe least than the three is '" <<									// calling the minimum template
		minimum(x, y, z) << "'\n";

	cout << '\n';

	return 0;													// exiting the program
}
