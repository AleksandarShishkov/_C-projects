




		/*
		 A C++ program that uses templates for setting,
		 sorting and searching elements in user defined
		 type of an array.
 		 */







#include "templates.h"												// including the templates.h header file



void menu(int&);												// a function prototype for the menu with a parameter
														// for the choice




int main()
{

	int size;												// an integer to hold the array`s size
	int choice = 1;												// an integer to hold the user`s choice

	int num_searchInt;											// an integer to hold the value serached
	float num_searchFloat;											// a float to hold the value searched
	double num_searchDouble;										// a double to hold the value searched
	char char_searchChar;											// a char to hold the character searched
	string string_searchString;										// a string to hold the string searched

	int* arrInt = nullptr;											// a pointer to an integer for the int array
	float* arrFloat = nullptr;										// a pointer to a float to hold the float array
	double* arrDouble = nullptr;										// a pointer to a double to hold the double array
	char* arrChar = nullptr;										// a pointer to a char to hold the char array	
	string* arrString = nullptr;										// a pointer to a string to hold the string array





	while (choice != 0)											// a sentinel-controlled loop
	{
		menu(choice);											// calling the menu function

		switch (choice)											// switch operator for the choice
		{
		case 1:

			cout << "\nEnter the size of the array: ";						// prompting the user to enter the size
			cin >> size;										// of the array

			while (size < 1)									// validating the input
			{	
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrInt = new int[size];									// allocating memory for the array of ints

			
			get_elements(arrInt, size);								// calling the get_elements() template
			sort(arrInt, size);									// calling the sort() template

			cout << "\t\nThe sorted array is: \n";							// printing the sorted array
			for (int i = 0; i < size; i++)
			{
				cout << *(arrInt + i) << ' ';
			}

			cout << "\n\nEnter an integer for the search> ";					// promting the user to enter an integer
			cin >> num_searchInt;									// for the search

			if (search(num_searchInt, arrInt, size) != -1)						// validating the returned value from the search() template
				cout << "\n'" << num_searchInt << "' was located at position " <<
				search(num_searchInt, arrInt, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchInt << "' isn`t in the array\n";

			break;


		case 2:

			cout << "\nEnter the size of the array: ";						// promting the user to enter the size 
			cin >> size;										// of the array

			while (size < 1)									// validating the input
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrFloat = new float[size];								// allocating memory for the array of floats


			get_elements(arrFloat, size);								// calling the get_elements() template
			sort(arrFloat, size);									// calling the sort() template

			cout << "\t\nThe sorted array is: \n";							// printing the sorted array
			for (int i = 0; i < size; i++)
			{
				cout << *(arrFloat + i) << ' ';
			}

			cout << "\n\nEnter a float for the search> ";						// promting the user to enter a float for the search
			cin >> num_searchFloat;

			if (search(num_searchFloat, arrFloat, size) != -1)					// validating the returned value from the search() template
				cout << "\n'" << num_searchFloat << "' was located at position " <<
				search(num_searchFloat, arrFloat, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchFloat << "' isn`t in the array\n";

			break;


		case 3:

			cout << "\nEnter the size of the array: ";						// promting the user to enter the size
			cin >> size;										// of the array

			while (size < 1)									// validating the input
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrDouble = new double[size];								// allocating memory for the array of doubles


			get_elements(arrDouble, size);								// calling the get_element() template
			sort(arrDouble, size);									// calling the sort() template

			cout << "\t\nThe sorted array is: \n";							// printing the sorted array
			for (int i = 0; i < size; i++)
			{
				cout << *(arrDouble + i) << ' ';
			}

			cout << "\n\nEnter a double for the search> ";						// prompting the user to enter a double for the search
			cin >> num_searchDouble;

			if (search(num_searchDouble, arrDouble, size) != -1)					// validating the returned value from the seach() template
				cout << "\n'" << num_searchDouble << "' was located at position " <<
				search(num_searchDouble, arrDouble, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchDouble << "' isn`t in the array\n";

			break;


		case 4:

			cout << "\nEnter the size of the array: ";						// prompting the user to enter the size
			cin >> size;										// of the array

			while (size < 1)									// validating the input
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrChar = new char[size];								// allocating memory for the array of chars


			get_elements(arrChar, size);								// calling the get_elements() template
			sort(arrChar, size);									// calling the sort() template

			cout << "\t\nThe sorted array is: \n";							// printing the sorted array
			for (int i = 0; i < size; i++)
			{
				cout << *(arrChar + i) << ' ';
			}

			cout << "\n\nEnter a character for the search> ";					// promting the user to enter a char
			cin >> char_searchChar;									// for the search

			if (search(char_searchChar, arrChar, size) != -1)					// validating the returned value from the search() template
				cout << "\n'" << char_searchChar << "' was located at position " <<
				search(char_searchChar, arrChar, size) + 1 << "\n";
			else
				cout << "\n'" << char_searchChar << "' isn`t in the array\n";

			break;



		case 5:

			cout << "\nEnter the size of the array: ";						// promting the user to enter the size
			cin >> size;										// of the array

			while (size < 1)									// validating the input
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrString = new string[size];								// allocating memory for the array of strings


			get_elements(arrString, size);								// calling the get_elements() template
			sort(arrString, size);									// calling the sort() template

			cout << "\t\nThe sorted array is: \n";							// printing the sorted array
			for (int i = 0; i < size; i++)
			{
				cout << *(arrString + i) << ' ';
			}

			cout << "\n\nEnter a string for the search> ";						// prompting the user to enter a string
			cin >> string_searchString;								// for the search

			if (search(string_searchString, arrString, size) != 1)					// validating the returned value from the search() template
				cout << "\n'" << string_searchString << "' was located at position " <<
				search(string_searchString, arrString, size) + 1 << "\n";
			else
				cout << "\n'" << string_searchString << "' isn`t in the array\n";

			break;


		case 0:

			cout << "\n\tYou have exited the program!\n";						// printing a message indicating that the program
			break;											// has ended

		default:

			cout << "\nInvalid input. Try again!\n";						// printing a message indicating that the selected
			break;											// option is invalid

		}
	}

	
	
	delete arrInt;												// freeing the allocated memory for arrInt
	delete arrFloat;											// freeing the allocated memory for arrFloat
	delete arrDouble;											// freeing the allocated memory for arrDouble
	delete arrChar;												// freeing the allocated memory for arrChar
	delete arrString;											// freeng the allocated memory for arrString
	

	return 0;
}




void menu(int& choice)												// a definition for the menu() function, it accepts
{														// an argument by reference for the choice
	cout << "\n\tSelect between the following\n\n";

	cout << "'1' for an array of integers";
	cout << "\n'2' for an array of floats";
	cout << "\n'3' for an array of doubles";
	cout << "\n'4' for an array of chars";
	cout << "\n'5' for an array of strings";
	cout << "\n'0' to quit";
	cout << "\n\t> ";
	cin >> choice;												// promting the user to enter the choice

	
}




