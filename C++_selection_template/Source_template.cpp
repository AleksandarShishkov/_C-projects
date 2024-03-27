

#include <iostream>											
using namespace std;											


template<class D, class D1>										
D get_data(D* arr, D1 size)										
{													

	
	cout << "\nEnter " << size <<									
		" elements.\n";										
	
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i + 1 << "> ";
		cin >> *(arr + i);									
	}												


	return *arr;											

}

template<class S, class S1>										
S sort(S *arr, S1 size)											
{													


	for (int i = 0; i < size - 1; i++)
	{
		S min = *(arr + i);									
													

		S1 min_index = i;									
													
		for (int j = i + 1; j < size; j++)
		{
			if (min > * (arr + j))								
			{
				min = *(arr + j);							
													

				min_index = j;								 
													
													
			}
		
		}

			S temp = *(arr + i);								
			*(arr + i) = min;
			*(arr + min_index) = temp;
		
	}

	return *arr;											
}

template<class P, class P1>										
void print(P* arr, P1 size)										
{													

	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";								
	}
}


int main()
{
	
	int size;											
	int choice = 0;											
	
	while (choice != 4)										
	{


		cout << "\n\n\tSelect between the following: \n";					
		cout << "\n'1' for an array of integers";						
		cout << "\n'2' for an array of doubles";
		cout << "\n'3' for an array of characters";
		cout << "\n'4' to quit";
		cout << "\n> ";										
		cin >> choice;										
		if (choice == 1)									
		{
			cout << "\n\tYou`ve selected to " <<
				"sort an aray of integers\n";

			cout << "\nEnter the size> ";							
			cin >> size;									

			while (size < 1)								
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			int* arrInt = new int[size];							
													

			get_data(arrInt, size);								
			cout << "\nThe input array is: \n";
			print(arrInt, size);								

			sort(arrInt, size);								
			cout << "\n\nThe sorted array is: \n";
			print(arrInt, size);								

			delete arrInt;									

		}
		else if (choice == 2)									
		{

			cout << "\n\tYou`ve selected to " <<
				"sort and array of doubles\n";

			cout << "\nEnter the size> ";							
			cin >> size;									

			while (size < 1)								
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			double* arrDouble = new double[size];						
													

			get_data(arrDouble, size);							
			cout << "\nThe input array is: \n";
			print(arrDouble, size);								

			sort(arrDouble, size);								
			cout << "\n\nThe sorted array is: \n";
			print(arrDouble, size);								

			delete arrDouble;								

		}
		else if (choice == 3)									
		{
			cout << "\n\tYou`ve selected to " <<
				"sort an array of chars\n";

			cout << "\nEnter the size: ";							
			cin >> size;									

			while (size < 1)								
			{
				cout << "\nInvalid size. Try again> ";
				cin >> size;
			}

			char* arrChar = new char[size];							
													

			get_data(arrChar, size);							
			cout << "\nThe input array is: \n";
			print(arrChar, size);								

			sort(arrChar, size);								
			cout << "\n\nThe sorted array is: \n";
			print(arrChar, size);								

			delete arrChar;									

		}
		else if (choice == 4)									
		{
			cout << "\nYou`ve selected option " <<						
				"'4'\nThe program has ended\n";						
		}
		else											
			cout << "\n\nInvalid input. Try again>\n";

	}												



	return 0;											
}


