



#ifndef VECTOR_H
#define VECTOR_H


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>												
class Vector
{

private:

	int size_vect;												
	vector<T> vectPtr;											


public:

	Vector();												


	class ExceptionSize											
	{
	private:

		int size_vect;											
		
	public:

		ExceptionSize(int size_vect)									
		{
			this->size_vect = size_vect;
		}

		int get_size()											
		{
			return this->size_vect;											
		}
	};





	Vector(Vector*);											

	T options_();												
	
	
	void set_size();											
	T get_size();												
	void set_elements();											

	T mode(T);												
	T find_element(T);											
	T b_search(T);												
	void sort_vect();											
	void for_each_vect(T);											

	T max_vect(T, T);											
	T min_vect(T, T);											
	void shuffle_vect();											
	T num_elements();											

	void push_element(T);											
	void pop_element();											

	void print_vector();											

	~Vector();												




};


template <class T>
Vector<T>::Vector()												
{

}


template <class T>
Vector<T>::Vector(Vector* obj)											
{
	for (int i = 0; i < size_vect; i++)
		*(vectPtr + i) = *(obj->vectPtr + i);
	
	
}

template <class T>
T Vector<T>::options_()												
{
	int choice;												

	cout << "\n\n\t\tSelect between the following:\n";
	cout << "\n\t\t'1' for finding the mode";
	cout << "\n\t\t'2' for finding and returning a pointer to the first occurance of a value";
	cout << "\n\t\t'3' for searching for an element";
	cout << "\n\t\t'4' for adding a value to each element";
	cout << "\n\t\t'5' for the maximum value";
	cout << "\n\t\t'6' for the minimum value";
	cout << "\n\t\t'7' for randomly shuffeling the vector";
	cout << "\n\t\t'8' for sorting the vector";
	cout << "\n\t\t'9' for number of the elements";
	cout << "\n\t\t'10' for inserting new element";
	cout << "\n\t\t'11' for removing an element";
	cout << "\n\t\t'12' for printing the vector";
	cout << "\n\t\t'0' to quit to the main options";

	cout << "\n\t\t	> ";											
	cin >> choice;

	return choice;												
}

template <class T>
void Vector<T>::set_size()											
{
	cout << "\nEnter the initial size of the vector of '" << typeid(T).name() << "s'> ";
	cin >> this->size_vect;											

	if (this->size_vect < 1)										
		throw(ExceptionSize(this->size_vect));								

	
	
}

template <class T>
void Vector<T>::set_elements()											
{
	cout << "\nEnter " << size_vect << " elements:\n";							

	T value;												

	for (int i = 0; i < size_vect; i++)
	{
		cout << "#" << i + 1 << "> ";
		cin >> value;

		vectPtr.push_back(value);									
	}
}

template <class T>
T Vector<T>::get_size()												
{
	return this->size_vect;											
}

template <class T>	
T Vector<T>::mode(T value)											
{														
	T* iter1 = &vectPtr[0];											
	T* iter2 = &vectPtr[size_vect - 1];									

	return count(iter1, iter2, value);									
}

template <class T>
T Vector<T>::find_element(T value)										
{														
	T* iter1 = &vectPtr[0];											
	T* iter2 = &vectPtr[size_vect - 1];									
	T* iter3 = find(iter1, iter2, value);									

	return *iter3;												
}

template <class T>
T Vector<T>::b_search(T value)											
{														
	T* iter1 = &vectPtr[0];											
	T* iter2 = &vectPtr[size_vect - 1];									
			
	return binary_search(iter1, iter2, value);								


}

template <class T>
void Vector<T>::sort_vect()											
{
	T* iter1 = &vectPtr[0];											
	T* iter2 = &vectPtr[size_vect - 1];									

	sort(iter1, iter2);											

	
}

template <class T>
void Vector<T>::for_each_vect(T value)										
{														

	for (int i = 0; i < size_vect; i++)									
		vectPtr[i] += value;	
	

}

template <class T>
T Vector<T>::max_vect(T index1, T index2)									
{														
	T* iter1 = &vectPtr[index1];										
	T* iter2 = &vectPtr[index2];										
	T* iter3 = max_element(iter1, iter2);									

	return *iter3;												
}

template <class T>
T Vector<T>::min_vect(T index1, T index2)									
{														
	T* iter1 = &vectPtr[index1];										
	T* iter2 = &vectPtr[index2];										
	T* iter3 = min_element(iter1, iter2);									

	return *iter3;												

}

template <class T>
void Vector<T>::shuffle_vect()											
{
	T* iter1 = &vectPtr[0];											
	T* iter2 = &vectPtr[size_vect - 1];									

	random_shuffle(iter1, iter2);										
}														


template <class T>
T Vector<T>::num_elements()											
{
	return size(vectPtr);											
}

template <class T>
void Vector<T>::push_element(T value)										
{														
	vectPtr.push_back(value);										

	size_vect += 1;												
	cout << "\nThe new element`s been added!\n";
}

template <class T>
void Vector<T>::pop_element()											
{	
	vectPtr.pop_back();											
	
	cout << "\nElement '" << this->size_vect << "' has been popped!\n";
	size_vect -= 1;												
}

template <class T>
void Vector<T>::print_vector()											
{
	for (int i = 0; i < size_vect; i++)									
		cout << vectPtr[i] << ' ';
}

template <class T>
Vector<T>::~Vector()												
{
	
}




#endif
