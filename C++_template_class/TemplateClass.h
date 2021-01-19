#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <iostream>

using namespace std;


template <typename T>
class TemplateClass																			// template class TemplateClass
{

private:

	T num1;																					// a template variable to hold num1
	T num2;																					// a template variable to hold num2
	T num3;																					// a template variable to hold num3


public:

	TemplateClass();																		// default constructor

	TemplateClass(T, T, T);																	// constructor with three parameters


	void set_num1();																		// setter for num1
	void set_num2();																		// setter for num2
	void set_num3();																		// setter for num3

	T get_smallest();																		// getter for the smallest value
	T get_largest();																		// getter for the largest value
	T get_middle();																			// getter for the middle value



};



template <typename T>																		// implementing the default constructor
TemplateClass<T>::TemplateClass() : num1(0), num2(0),
num3(0)
{

}



template <typename T>																		// implementing the constructor with parameters
TemplateClass<T>::TemplateClass(T num1, T num2, T num3)
{
	this->num1 = num1;																		// assigning the value to num1
	this->num2 = num2;																		// assigning the value to num2
	this->num3 = num3;																		// assigning the value to num3
}



template <typename T>																		// implementing the setter for num1
void TemplateClass<T>::set_num1()
{
	cout << "\nEnter num1> ";
	cin >> num1;
}


template <typename T>																		// implementing the setter for num2
void TemplateClass<T>::set_num2()
{
	cout << "\nEnter num2> ";
	cin >> num2;
}


template <typename T>																		// implementing the setter for num3
void TemplateClass<T>::set_num3()
{
	cout << "\nEnter num3> ";
	cin >> num3;
}




template <typename T>																		// implementing the getter for the smallest
T TemplateClass<T>::get_smallest()
{
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}



template <typename T>																		// implementing the getter for the largest
T TemplateClass<T>::get_largest()
{
	if (num1 > num2 && num1 > num3)
		return num3;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

template <typename T>																		// implementing the getter for the middle
T TemplateClass<T>::get_middle()
{
	if (num1 < num2 && num1 > num3)
		return num1;
	else if (num2 < num1 && num2 > num3)
		return num2;
	else
		return num3;
}





#endif