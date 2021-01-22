




		/*
		 A C++ program that uses templates
		 for input and output of array elements
		 in user-defined range.
		 */





#include <iostream>
#include <cctype>


using namespace std;


template <typename T>																				// template definition for inputting the array elements
void get_data(T* arr, int size, int& lowSubscript, int& highSubscript)
{
	cout << "\nEnter " << size << " elements of type '"<< typeid(T).name() << "': \n";				// promting the user to input the elements
	
	for (int i = 0; i < size; i++)
	{
		cout << "#" << i + 1 << "> ";
		cin >> *(arr + i);
	}
		
	cout << "\nEnter the low subscript (1 - " << size << ")> ";										// promting the user to input the low subscript
	cin >> lowSubscript;

	while (lowSubscript < 1 || lowSubscript > size)													// validating the input
	{
		cout << "\n'" << lowSubscript << "' cannot be a valid value. Try again> ";
		cin >> lowSubscript;
	}


	cout << "\nEnter the high subscript (" << lowSubscript << " - " << size << ")> ";				// promting the user to input the high subscript
	cin >> highSubscript;

	while (highSubscript < lowSubscript || highSubscript > size)									// validating the input
	{
		cout << "\n'" << highSubscript << "' cannot be a valid value. Try again> ";
		cin >> highSubscript;
	}

}


template <typename T>																				// a template definition for printing the selected elements
void printArray(const T* const array, int lowSubscript, int highSubscript)
{

	if (lowSubscript != highSubscript)																// validating the low and high subscripts
		cout << "\nElements " << lowSubscript << " - " << highSubscript << " are:\n";
	else
		cout << "\nElement " << lowSubscript << " is:\n";



	for (int i = lowSubscript - 1; i < highSubscript; i++)											// printing the elements
	{
		cout << "#" << i + 1 << "> " << *(array + i) << '\n';
	}

	cout << '\n';
}



int main()
{

	const int aCount = 10;																			// an integer to hold the size for the array of integers
	const int bCount = 10;																			// an integer to hold the size for the arrat of doubles
	const int cCount = 10;																			// an integer to hold the size for the array of chars

	int a[aCount];																					// an array of integers
	double b[bCount];																				// an array of doubles
	char c[cCount];																					// an array of chars

	char choice;																					// a char to hold the user`s choice
	bool another_try = true;																		// a boolean to control the loop

	while (another_try)
	{

		int lowSubscript;																			// an integer to hold the low subscript
		int highSubscript;																			// an integer to hold the high subscript

		get_data(a, aCount, lowSubscript, highSubscript);											// calling the templates with the three different types
		printArray(a, lowSubscript, highSubscript);													

		get_data(b, bCount, lowSubscript, highSubscript);
		printArray(b, lowSubscript, highSubscript);

		get_data(c, cCount, lowSubscript, highSubscript);
		printArray(c, lowSubscript, highSubscript);


		cout << "\nAnother try (y/n)> ";															// prompting the user to select y/n for another try
		cin >> choice;

		while (tolower(choice) != 'y' && tolower(choice) != 'n')									// validating the input
		{
			cout << "\n'" << choice << "' cannot be a valid choice. Try again> ";
			cin >> choice;
		}

		if (choice == 'y')
			another_try = true;																		// setting another_try to true
		else
			another_try = false;																	// setting another_try to false

	}


	cout << "\nThe program has ended!\n";															// a message indicating the end of the program



	return 0;
}


