#include "PackagedFood.h"											
#include "FreshFood.h"												




int main()													
{

	PackagedFood p_food1(15.5, 32315, "Potatoes");								
	PackagedFood p_food2;											
	PackagedFood* p_ptrFood = &p_food2;									

	FreshFood f_food1(0.50, 14.5, 12341, "Oranges");							
	FreshFood f_food2;											
	FreshFood* f_ptrFood = &f_food1;									


	p_food1.set_numUnits();											
	p_food1.printer();											

	p_food2.scanner();											
	p_food2.get_numUnits();											
	p_food2.printer();											
	p_ptrFood->setName();											
	p_ptrFood->setCode();											
	p_ptrFood->set_numUnits();										
	p_ptrFood->set_pricePerUnit();										
	p_ptrFood->printer();											


	f_food1.printer();											

	f_ptrFood->scanner();											
	f_ptrFood->printer();											

	f_food2.setName();											
	f_food2.set_pricePerKilo();										
	f_food2.set_weight();											
	f_food2.printer();											

	cout << f_food1.getName() << '\n';									
	cout << f_food1.getTotal() << '\n'; // testing the getter for the total amount





		return 0;
}
