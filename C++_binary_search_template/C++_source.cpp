
#include "templates.h"												



void menu(int&);												
														




int main()
{

	int size;												
	int choice = 1;												

	int num_searchInt;											
	float num_searchFloat;											
	double num_searchDouble;										
	char char_searchChar;											
	string string_searchString;										

	int* arrInt = nullptr;											
	float* arrFloat = nullptr;										
	double* arrDouble = nullptr;										
	char* arrChar = nullptr;											
	string* arrString = nullptr;										





	while (choice != 0)											
	{
		menu(choice);											

		switch (choice)											
		{
		case 1:

			cout << "\nEnter the size of the array: ";						
			cin >> size;										

			while (size < 1)									
			{	
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrInt = new int[size];									

			
			get_elements(arrInt, size);								
			sort(arrInt, size);									
			cout << "\t\nThe sorted array is: \n";							
			for (int i = 0; i < size; i++)
			{
				cout << *(arrInt + i) << ' ';
			}

			cout << "\n\nEnter an integer for the search> ";					
			cin >> num_searchInt;									

			if (search(num_searchInt, arrInt, size) != -1)						
				cout << "\n'" << num_searchInt << "' was located at position " <<
				search(num_searchInt, arrInt, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchInt << "' isn`t in the array\n";

			break;


		case 2:

			cout << "\nEnter the size of the array: ";						 
			cin >> size;										

			while (size < 1)									
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrFloat = new float[size];								


			get_elements(arrFloat, size);								
			sort(arrFloat, size);									

			cout << "\t\nThe sorted array is: \n";							
			for (int i = 0; i < size; i++)
			{
				cout << *(arrFloat + i) << ' ';
			}

			cout << "\n\nEnter a float for the search> ";						
			cin >> num_searchFloat;

			if (search(num_searchFloat, arrFloat, size) != -1)					
				cout << "\n'" << num_searchFloat << "' was located at position " <<
				search(num_searchFloat, arrFloat, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchFloat << "' isn`t in the array\n";

			break;


		case 3:

			cout << "\nEnter the size of the array: ";						
			cin >> size;										

			while (size < 1)									
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrDouble = new double[size];								


			get_elements(arrDouble, size);								
			sort(arrDouble, size);									

			cout << "\t\nThe sorted array is: \n";							
			for (int i = 0; i < size; i++)
			{
				cout << *(arrDouble + i) << ' ';
			}

			cout << "\n\nEnter a double for the search> ";						
			cin >> num_searchDouble;

			if (search(num_searchDouble, arrDouble, size) != -1)					
				cout << "\n'" << num_searchDouble << "' was located at position " <<
				search(num_searchDouble, arrDouble, size) + 1 << "\n";
			else
				cout << "\n'" << num_searchDouble << "' isn`t in the array\n";

			break;


		case 4:

			cout << "\nEnter the size of the array: ";						
			cin >> size;										

			while (size < 1)									
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrChar = new char[size];								


			get_elements(arrChar, size);								
			sort(arrChar, size);									

			cout << "\t\nThe sorted array is: \n";							
			for (int i = 0; i < size; i++)
			{
				cout << *(arrChar + i) << ' ';
			}

			cout << "\n\nEnter a character for the search> ";					
			cin >> char_searchChar;									

			if (search(char_searchChar, arrChar, size) != -1)					
				cout << "\n'" << char_searchChar << "' was located at position " <<
				search(char_searchChar, arrChar, size) + 1 << "\n";
			else
				cout << "\n'" << char_searchChar << "' isn`t in the array\n";

			break;



		case 5:

			cout << "\nEnter the size of the array: ";						
			cin >> size;										

			while (size < 1)									
			{
				cout << "\n'" << size << "' cannot be a valid size. Try again> ";
				cin >> size;
			}

			arrString = new string[size];								


			get_elements(arrString, size);								
			sort(arrString, size);									

			cout << "\t\nThe sorted array is: \n";							
			for (int i = 0; i < size; i++)
			{
				cout << *(arrString + i) << ' ';
			}

			cout << "\n\nEnter a string for the search> ";						
			cin >> string_searchString;								

			if (search(string_searchString, arrString, size) != 1)					
				cout << "\n'" << string_searchString << "' was located at position " <<
				search(string_searchString, arrString, size) + 1 << "\n";
			else
				cout << "\n'" << string_searchString << "' isn`t in the array\n";

			break;


		case 0:

			cout << "\n\tYou have exited the program!\n";						
			break;											

		default:

			cout << "\nInvalid input. Try again!\n";						
			break;											

		}
	}

	
	
	delete arrInt;												
	delete arrFloat;											
	delete arrDouble;											
	delete arrChar;												
	delete arrString;											
	

	return 0;
}




void menu(int& choice)												
{														
	cout << "\n\tSelect between the following\n\n";

	cout << "'1' for an array of integers";
	cout << "\n'2' for an array of floats";
	cout << "\n'3' for an array of doubles";
	cout << "\n'4' for an array of chars";
	cout << "\n'5' for an array of strings";
	cout << "\n'0' to quit";
	cout << "\n\t> ";
	cin >> choice;												

	
}




