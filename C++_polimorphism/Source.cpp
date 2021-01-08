#include "PackagedFood.h"											// including the PackagedFood header file
#include "FreshFood.h"												// including the FreshFood header file




int main()													// main function
{

	PackagedFood p_food1(15.5, 32315, "Potatoes");								// instance of the PackageFood class
	PackagedFood p_food2;											// instance of the PackageFood class
	PackagedFood* p_ptrFood = &p_food2;									// a pointer to the PackageFood class`s instance

	FreshFood f_food1(0.50, 14.5, 12341, "Oranges");							// instance of the FreshFood class
	FreshFood f_food2;											// instance of the FreshFood class
	FreshFood* f_ptrFood = &f_food1;									// a pointer to the FreshFood class`s instance


	p_food1.set_numUnits();											// testing the setter for the number of units
	p_food1.printer();											// testing the printer function	

	p_food2.scanner();											// testing the scanner function
	p_food2.get_numUnits();											// testing the setter for the number of units
	p_food2.printer();											// testing the printer function

	p_ptrFood->setName();											// testing the setter for the name
	p_ptrFood->setCode();											// testing the setter for the code
	p_ptrFood->set_numUnits();										// testing the setter for the number of units
	p_ptrFood->set_pricePerUnit();										// testing the setter for the price
	p_ptrFood->printer();											// printing the result


	f_food1.printer();											// testing the printer function

	f_ptrFood->scanner();											// testing the scanner function
	f_ptrFood->printer();											// printing the result

	f_food2.setName();											// testing the setter for the name
	f_food2.set_pricePerKilo();										// testing the setter for the price per kilo
	f_food2.set_weight();											// testing the setter for the weight
	f_food2.printer();											// printing the result

	cout << f_food1.getName() << '\n';									// testing the getter for the name
	cout << f_food1.getTotal() << '\n'; // testing the getter for the total amount





		return 0;
}