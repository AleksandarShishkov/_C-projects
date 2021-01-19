



		/*
		 A C++ program that uses a template class
		 to calculate the largest, the smallest and
		 the middle value entered by the user.
		 */






#include "TemplateClass.h"												// including TemplateClass header file


int main()
{

	TemplateClass<int>* objInt = new TemplateClass<int>(12, 51, 3);							// a pointer to an int TemplateClass`s object with parameters

	TemplateClass<double>* objDouble = new TemplateClass<double>;							// a pointer to a double TemplateClass`s object without parameters

	TemplateClass<float> objF(22.3, 33.4, 44.5);									// a float TemplateClass`s object with parameters

	TemplateClass<float>* objFloat = &objF;										// a pointer to the float TemplateClass`s object



	cout << "\nThe smallest integer is: " << objInt->get_smallest();						// printing the smallest integer
	cout << "\nThe middle integer is: " << objInt->get_middle();							// printing the middle integer


	cout << "\n\nEnter the three doubles:";

	objDouble->set_num1();												// setter for the first double number
	objDouble->set_num2();												// setter for the second double number
	objDouble->set_num3();												// setter for the third double number

	cout << "\nThe largest double is: " << objDouble->get_largest();						// printing the largest double
	cout << "\nThe smallest double is: " << objDouble->get_smallest();						// printing the smallest double
	cout << "\nThe middle double is: " << objDouble->get_middle();							// printing the middle double

	cout << '\n';
	cout << "\nThe largest float is: " << objFloat->get_largest();							// printing the largest float
	cout << "\nThe smallest float is: " << objFloat->get_smallest();						// printing the smallest float


	cout << "\n\n\tThe program has ended!\n";									// a message indicating the end of the program
	




	return 0;

}
