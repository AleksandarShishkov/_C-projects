
#include <iostream>														
using namespace std;														




template <class T>														
T total(T num)
{
	static T total = 0;													
	
	if (num == -1)														
	{
		return total;
	}
	else
		total += num;													
}



int main()
{

	int numI = 0;														
	double numD = 0;													
	
	int choice;														

	cout << "\n\tChoose between the following: \n\n" <<									
		"\t'1' for integer\n" <<
		"\t'2' for double\n" <<
		"\t'-1' to stop entering\n";
	cout << "> ";
	cin >> choice;														
	switch (choice)														
	{
	case 1:

		while (numI != -1)												
		{
			cout << "\nEnter an integer> ";										
			cin >> numI;

			if (numI != -1)												
				total(numI);														else
				cout << "\n\tThe total ot the entered integers is: " <<		
				total(numI) << '\n';								
		}

		break;

	case 2:

		while (numD != -1)												
		{
			cout << "\nEnter a double> ";										
			cin >> numD;

			if (numD != -1)												
				total(numD);														else
				cout << "\n\tThe total of the entered doubles is: " <<		
				total(numD) << "\n";
		}

		break;

	default:														

		cout << "\nInvalid input. Try again!\n";
		break;
	}

	




	return 0;														
}
