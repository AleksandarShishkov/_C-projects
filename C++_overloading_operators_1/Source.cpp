#include "NumDays.h"												



int main()													
{

	NumDays obj1(15);											
	NumDays obj2(30);											
	NumDays obj3(9);											
	NumDays* ptrObj3 = &obj3;										



	obj2 + obj1;												
	cout << "\n\tNow object 1 has worked " << setprecision(2) <<												
		obj1.get_numDays() << " days\n";								

	*ptrObj3 - obj2;											
	cout << "\n\tNow object 2 has worked " << setprecision(2) <<											
		obj2.get_numDays() << " days\n";								


	++obj3;													
	cout << "\nThe result is : " << obj3.get_numHours() <<							
		" hours\n";
	cout << "\tNow object 3 has worked " << setprecision(2) <<						
		obj3.get_numDays() << " days\n";								


	(*ptrObj3)++;												
	cout << "\nThe result is : " << ptrObj3->get_numHours() <<						
		" hours\n";
	cout << "\tNow object ptrbj3 has worked " << setprecision(2) <<						
		ptrObj3->get_numDays() << " days\n"; 								

	--obj1;													
	cout << "\nThe result is : " << obj1.get_numHours() <<							
		" hours\n";
	cout << "\tNow object 1 has worked " << setprecision(2) <<						
		obj1.get_numDays() << " days\n";								

	obj2--;													
	cout << "\nThe result is : " << obj2.get_numHours() <<							
		" hours\n";
	cout << "\tNow object 1 has worked " << setprecision(2) <<						
		obj2.get_numDays() << " days\n";								



	return 0;												
}
