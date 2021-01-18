#include <iostream>
#include <string>

using namespace std;



template <typename E>																		// a template for the elements in the array
E get_elements(E* arr, int size)															// with two parameters that returns a pointer
{																							// to the array
	cout << "\nEnter the elements:\n";														

	for (int i = 0; i < size; i++)
	{
		cout << "Element #" << i + 1 << "> ";
		cin >> *(arr + i);
	}

	return *arr;																			
}



template <typename Sort>																	// a template for sorting the array
Sort sort(Sort* arr, int size)																// with two parameters that returns a pointer
{																							// to the array


	for (int i = 0; i < size - 1; i++)
	{
		Sort min = *(arr + i);																
		int index = i;																		

		for (int j = i + 1; j < size; j++)
		{
			if (min > * (arr + j))															
			{
				min = *(arr + j);
				index = j;
			}
		}

		Sort temp = *(arr + index);															
		*(arr + index) = *(arr + i);
		*(arr + i) = temp;
	}


	return *arr;																			
}



template <typename Search>																	// a tempalte for the search
int search(Search num, Search* arr, int size)												// with three parameters that returns the index of
{																							// the searched element if in the array


	int first = 0;																			
	int last = size - 1;																	
	int middle;																				
	int index = -1;																			

	bool found = false;

	while (!found && first <= last)
	{

		middle = (first + last) / 2;

		if (*(arr + middle) == num)
		{
			found = true;
			index = middle;
		}
		else if (*(arr + middle) > num)
			last = middle - 1;
		else
			first = middle + 1;
	}

	return index;
}



