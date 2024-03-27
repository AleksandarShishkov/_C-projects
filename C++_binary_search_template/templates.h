#include <iostream>
#include <string>

using namespace std;



template <typename E>												
E get_elements(E* arr, int size)										
{														
	cout << "\nEnter the elements:\n";														

	for (int i = 0; i < size; i++)
	{
		cout << "Element #" << i + 1 << "> ";
		cin >> *(arr + i);
	}

	return *arr;																			
}



template <typename Sort>											
Sort sort(Sort* arr, int size)											
{														


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



template <typename Search>											
int search(Search num, Search* arr, int size)									
{														


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



