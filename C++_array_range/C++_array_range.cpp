


#include <iostream>
#include <cctype>


using namespace std;


template <typename T>													
void get_data(T* arr, int size, int& lowSubscript, int& highSubscript)
{
	cout << "\nEnter " << size << " elements of type '"<< typeid(T).name() << "': \n";				
	
	for (int i = 0; i < size; i++)
	{
		cout << "#" << i + 1 << "> ";
		cin >> *(arr + i);
	}
		
	cout << "\nEnter the low subscript (1 - " << size << ")> ";							
	cin >> lowSubscript;

	while (lowSubscript < 1 || lowSubscript > size)									
	{
		cout << "\n'" << lowSubscript << "' cannot be a valid value. Try again> ";
		cin >> lowSubscript;
	}


	cout << "\nEnter the high subscript (" << lowSubscript << " - " << size << ")> ";				
	cin >> highSubscript;

	while (highSubscript < lowSubscript || highSubscript > size)							
	{
		cout << "\n'" << highSubscript << "' cannot be a valid value. Try again> ";
		cin >> highSubscript;
	}

}


template <typename T>													
void printArray(const T* const array, int lowSubscript, int highSubscript)
{

	if (lowSubscript != highSubscript)										
		cout << "\nElements " << lowSubscript << " - " << highSubscript << " are:\n";
	else
		cout << "\nElement " << lowSubscript << " is:\n";



	for (int i = lowSubscript - 1; i < highSubscript; i++)								
	{
		cout << "#" << i + 1 << "> " << *(array + i) << '\n';
	}

	cout << '\n';
}



int main()
{

	const int aCount = 10;												
	const int bCount = 10;												
	const int cCount = 10;												

	int a[aCount];													
	double b[bCount];												
	char c[cCount];													

	char choice;													
	bool another_try = true;											

	while (another_try)
	{

		int lowSubscript;											
		int highSubscript;											

		get_data(a, aCount, lowSubscript, highSubscript);							
		printArray(a, lowSubscript, highSubscript);													

		get_data(b, bCount, lowSubscript, highSubscript);
		printArray(b, lowSubscript, highSubscript);

		get_data(c, cCount, lowSubscript, highSubscript);
		printArray(c, lowSubscript, highSubscript);


		cout << "\nAnother try (y/n)> ";									
		cin >> choice;

		while (tolower(choice) != 'y' && tolower(choice) != 'n')						
		{
			cout << "\n'" << choice << "' cannot be a valid choice. Try again> ";
			cin >> choice;
		}

		if (choice == 'y')
			another_try = true;										
		else
			another_try = false;										

	}


	cout << "\nThe program has ended!\n";										



	return 0;
}


