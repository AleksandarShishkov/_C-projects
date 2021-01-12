




		
		 // This C++ program uses templates
		 // to receive an input from the user,
		 // to sort the inputted data and
		 // to print it on the screen regardless
		 // of the data types used.




#include <iostream>											// including the iostream directory

using namespace std;										// using the std namescpace


template<class D, class D1>									// declating template function
D get_data(D* arr, D1 size)									// get_data() with two arguments,
{															// one of which is a pointer to an array

	
	cout << "\nEnter " << size <<							// prompting the user to enter the array
		" elements.\n";										// elements

	
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i + 1 << "> ";
		cin >> *(arr + i);									// assigning the inputted value to
	}														// the current element


	return *arr;											// returning a pointer to the array

}

template<class S, class S1>									// declaring template function
S sort(S *arr, S1 size)										// sort() with two arguments,
{															// one of which is a pointer to an array


	for (int i = 0; i < size - 1; i++)
	{
		S min = *(arr + i);									// assigning the first element to
															// the S min variable

		S1 min_index = i;									// assigning the current index to
															// the S min_index variable

		for (int j = i + 1; j < size; j++)
		{
			if (min > * (arr + j))							// validating the next element
			{
				min = *(arr + j);							// assigning it to min if with
															// smaller value

				min_index = j;								// assigning the current index to 
															// min_index if the tested exprecion is
															// valid
			}
		
		}

			S temp = *(arr + i);							// swapping the elements
			*(arr + i) = min;
			*(arr + min_index) = temp;
		
	}

	return *arr;											// returning a pointer to an array
}

template<class P, class P1>									// declaring a remplate function
void print(P* arr, P1 size)									// print() with two arguments,
{															// one of which is a pointer to the array

	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";							// printing the elements on the screen
	}
}


int main()
{
	
	int size;												// an integer to hold the size
	int choice = 0;											// an integer to hold the choice
	
	while (choice != 4)										// entering the while loop
	{


		cout << "\n\n\tSelect between the following: \n";	// printing a menu
		cout << "\n'1' for an array of integers";			// of 4 options
		cout << "\n'2' for an array of doubles";
		cout << "\n'3' for an array of characters";
		cout << "\n'4' to quit";
		cout << "\n> ";										// prompting the user to
		cin >> choice;										// enter the selected option

		if (choice == 1)									// validating the input
		{
			cout << "\n\tYou`ve selected to " <<
				"sort an aray of integers\n";

			cout << "\nEnter the size> ";					// prompting the user to enter
			cin >> size;									// the size

			while (size < 1)								// validating the input
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			int* arrInt = new int[size];					// allocating memory for the array
															// of integers


			get_data(arrInt, size);							// calling get_data() function
			cout << "\nThe input array is: \n";
			print(arrInt, size);							// calling prin() function

			sort(arrInt, size);								// calling sort() function
			cout << "\n\nThe sorted array is: \n";
			print(arrInt, size);							// calling print() function

			delete arrInt;

		}
		else if (choice == 2)								// validating the input
		{

			cout << "\n\tYou`ve selected to " <<
				"sort and array of doubles\n";

			cout << "\nEnter the size> ";					// prompting the user to enter
			cin >> size;									// the size

			while (size < 1)								// validating the input
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			double* arrDouble = new double[size];			// allocating memory for the array
															// of doubles

			get_data(arrDouble, size);						// calling get_data() function
			cout << "\nThe input array is: \n";
			print(arrDouble, size);							// calling print() function

			sort(arrDouble, size);							// calling sort() function
			cout << "\n\nThe sorted array is: \n";
			print(arrDouble, size);							// calling print() function

			delete arrDouble;

		}
		else if (choice == 3)								// validating the input
		{
			cout << "\n\tYou`ve selected to " <<
				"sort an array of chars\n";

			cout << "\nEnter the size: ";					// prompting the user to enter
			cin >> size;									// the size

			while (size < 1)								// validating the input
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			char* arrChar = new char[size];					// allocating memory for the array
															// of chars

			get_data(arrChar, size);						// calling get_data() function
			cout << "\nThe input array is: \n";
			print(arrChar, size);							// calling print() function

			sort(arrChar, size);							// calling sort() function
			cout << "\n\nThe sorted array is: \n";
			print(arrChar, size);							// calling print() function

			delete arrChar;

		}
		else if (choice == 4)								// validating the input
		{
			cout << "\nYou`ve selected option " <<			// prinitng a messge indicating
				"'4'\nThe program has ended\n";				// that the program has ended
		}
		else												// validating the input
			cout << "\n\nInvalid input. Try again>\n";

	}														// exiting the while loop



	return 0;												// terminating the program
}


