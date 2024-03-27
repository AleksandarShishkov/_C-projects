
#include "TemplateClass.h"												


int main()
{

	TemplateClass<int>* objInt = new TemplateClass<int>(12, 51, 3);							

	TemplateClass<double>* objDouble = new TemplateClass<double>;							
	TemplateClass<float> objF(22.3, 33.4, 44.5);									

	TemplateClass<float>* objFloat = &objF;										



	cout << "\nThe smallest integer is: " << objInt->get_smallest();						
	cout << "\nThe middle integer is: " << objInt->get_middle();							

	cout << "\n\nEnter the three doubles:";

	objDouble->set_num1();												
	objDouble->set_num2();												
	objDouble->set_num3();												

	cout << "\nThe largest double is: " << objDouble->get_largest();						
	cout << "\nThe smallest double is: " << objDouble->get_smallest();						
	cout << "\nThe middle double is: " << objDouble->get_middle();							

	cout << '\n';
	cout << "\nThe largest float is: " << objFloat->get_largest();							
	cout << "\nThe smallest float is: " << objFloat->get_smallest();						


	cout << "\n\n\tThe program has ended!\n";									
	




	return 0;

}
