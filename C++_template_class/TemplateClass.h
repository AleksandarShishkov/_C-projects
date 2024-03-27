#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <iostream>

using namespace std;


template <typename T>
class TemplateClass													
{

private:

	T num1;														
	T num2;														
	T num3;														


public:

	TemplateClass();												
	TemplateClass(T, T, T);												

	void set_num1();												
	void set_num2();												
	void set_num3();												

	T get_smallest();												
	T get_largest();												
	T get_middle();													



};



template <typename T>													
TemplateClass<T>::TemplateClass() : num1(0), num2(0),
num3(0)
{

}



template <typename T>													
TemplateClass<T>::TemplateClass(T num1, T num2, T num3)
{
	this->num1 = num1;												
	this->num2 = num2;												
	this->num3 = num3;												
}



template <typename T>													
void TemplateClass<T>::set_num1()
{
	cout << "\nEnter num1> ";
	cin >> num1;
}


template <typename T>													
void TemplateClass<T>::set_num2()
{
	cout << "\nEnter num2> ";
	cin >> num2;
}


template <typename T>													
void TemplateClass<T>::set_num3()
{
	cout << "\nEnter num3> ";
	cin >> num3;
}




template <typename T>													
T TemplateClass<T>::get_smallest()
{
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}



template <typename T>													
T TemplateClass<T>::get_largest()
{
	if (num1 > num2 && num1 > num3)
		return num3;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

template <typename T>													
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
