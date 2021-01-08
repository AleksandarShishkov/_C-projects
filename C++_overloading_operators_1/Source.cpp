#include "NumDays.h"												// including the NumDays header



int main()													// the main function
{

	NumDays obj1(15);											// an object of the NumDays class
	NumDays obj2(30);											// an object of the NumDays class
	NumDays obj3(9);											// an object of the NumDays class
	NumDays* ptrObj3 = &obj3;										// a pointer to an object of NumDays class



	obj2 + obj1;												// testing the '+' operator
	cout << "\n\tNow object 1 has worked " << setprecision(2) <<						// formatting the output						
		obj1.get_numDays() << " days\n";								// printing the output

	*ptrObj3 - obj2;											// testing the '-' operator
	cout << "\n\tNow object 2 has worked " << setprecision(2) <<						// formatting the output					
		obj2.get_numDays() << " days\n";								// printing the output


	++obj3;													// testing the prefix '++' operator
	cout << "\nThe result is : " << obj3.get_numHours() <<							// printing the hours
		" hours\n";
	cout << "\tNow object 3 has worked " << setprecision(2) <<						// formatting the output
		obj3.get_numDays() << " days\n";								// printing the output


	(*ptrObj3)++;												// testing the postfix '++' operator
	cout << "\nThe result is : " << ptrObj3->get_numHours() <<						// printing the hours
		" hours\n";
	cout << "\tNow object ptrbj3 has worked " << setprecision(2) <<						// formatting the output
		ptrObj3->get_numDays() << " days\n"; 								// printing the result

	--obj1;													// testing the prefix '--' operator
	cout << "\nThe result is : " << obj1.get_numHours() <<							// printing the hours
		" hours\n";
	cout << "\tNow object 1 has worked " << setprecision(2) <<						// formatting the output
		obj1.get_numDays() << " days\n";								// printing the output

	obj2--;													// testing the postfix '--' operator
	cout << "\nThe result is : " << obj2.get_numHours() <<							// printing the hours
		" hours\n";
	cout << "\tNow object 1 has worked " << setprecision(2) <<						// formatting the output
		obj2.get_numDays() << " days\n";								// printing the output



	return 0;												// end of the program
}