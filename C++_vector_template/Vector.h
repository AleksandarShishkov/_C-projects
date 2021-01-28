



#ifndef VECTOR_H
#define VECTOR_H


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>												// template class Vector
class Vector
{

private:

	int size_vect;												// an integer to hold the vector`s size
	vector<T> vectPtr;											// an empti vector of type T


public:

	Vector();												// default constructor


	class ExceptionSize											// an exception class for the vectors size
	{
	private:

		int size_vect;											// an integer to hold the size
		
	public:

		ExceptionSize(int size_vect)									// a constructor with parameter for the size
		{
			this->size_vect = size_vect;
		}

		int get_size()											// a getter for the size
		{
			return this->size_vect;											
		}
	};





	Vector(Vector*);											// a copy constructor

	T options_();												// setter for the options
	
	
	void set_size();											// setter for the size
	T get_size();												// getter for the size
	void set_elements();											// setter for the elements

	T mode(T);												// getter for the mode
	T find_element(T);											// getter for the searched element
	T b_search(T);												// method for binary search
	void sort_vect();											// method for sorting the vector
	void for_each_vect(T);											// method for adding a value to the elements

	T max_vect(T, T);											// getter for the max value in range
	T min_vect(T, T);											// getter for the min value in range
	void shuffle_vect();											// setter for the shuffling
	T num_elements();											// getter for the number of the elements

	void push_element(T);											// setter for push_back
	void pop_element();											// setter for pop_back

	void print_vector();											// method for printing the elements

	~Vector();												// destructor




};


template <class T>
Vector<T>::Vector()												// instantiating the default constructor
{

}


template <class T>
Vector<T>::Vector(Vector* obj)											// instantiating the copy constructor
{
	for (int i = 0; i < size_vect; i++)
		*(vectPtr + i) = *(obj->vectPtr + i);
	
	
}

template <class T>
T Vector<T>::options_()												// instantiating the options_() method
{
	int choice;												// an integer to hold the choice

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

	cout << "\n\t\t	> ";											// promting the user to enter the choice
	cin >> choice;

	return choice;												// returning the choice
}

template <class T>
void Vector<T>::set_size()											// instantiating set_size() method
{
	cout << "\nEnter the initial size of the vector of '" << typeid(T).name() << "s'> ";
	cin >> this->size_vect;											// promting the user to enter the size

	if (this->size_vect < 1)										// valdiating the input
		throw(ExceptionSize(this->size_vect));								// throwing the exception if inavlid

	
	
}

template <class T>
void Vector<T>::set_elements()											// instantiating set_element() method
{
	cout << "\nEnter " << size_vect << " elements:\n";							// promting the user to enter the elements

	T value;												// a T variable to hold the inputed value

	for (int i = 0; i < size_vect; i++)
	{
		cout << "#" << i + 1 << "> ";
		cin >> value;

		vectPtr.push_back(value);									// adding the value to the vector
	}
}

template <class T>
T Vector<T>::get_size()												// instantiating get_size() method
{
	return this->size_vect;											// returning the current size of the vector
}

template <class T>	
T Vector<T>::mode(T value)											// instantiating mode() method with paramter for
{														// the searched value
	T* iter1 = &vectPtr[0];											// a T pointer to the first element
	T* iter2 = &vectPtr[size_vect - 1];									// a T pointer to the last elment

	return count(iter1, iter2, value);									// returning the result from count() method
}

template <class T>
T Vector<T>::find_element(T value)										// instantiating find_element() method with
{														// parameter for the searched valu
	T* iter1 = &vectPtr[0];											// A T pointer to the first element
	T* iter2 = &vectPtr[size_vect - 1];									// a T pointer to the last element
	T* iter3 = find(iter1, iter2, value);									// a T pointer to hold the result from find() method

	return *iter3;												// returning *iter3

}

template <class T>
T Vector<T>::b_search(T value)											// instantiating b_search() method with 
{														// a parameter for the searched value
	T* iter1 = &vectPtr[0];											// a T pointer to the first element
	T* iter2 = &vectPtr[size_vect - 1];									// a T pointer to the last element
			
	return binary_search(iter1, iter2, value);								// returning the result from binary_search() method


}

template <class T>
void Vector<T>::sort_vect()											// instantiating sort_vect() method
{
	T* iter1 = &vectPtr[0];											// a pointer to the first element
	T* iter2 = &vectPtr[size_vect - 1];									// a pointer to the last element

	sort(iter1, iter2);											// sorting the vector with the sort() method

	
}

template <class T>
void Vector<T>::for_each_vect(T value)										// instantiating for_each_vect() method with
{														// parameter for the value

	for (int i = 0; i < size_vect; i++)									// adding the value to each element
		vectPtr[i] += value;	
	

}

template <class T>
T Vector<T>::max_vect(T index1, T index2)									// instantiating mac_vext() method with parameters
{														// for the range
	T* iter1 = &vectPtr[index1];										// a T pointer to x coordinate
	T* iter2 = &vectPtr[index2];										// a T pointer to y coordinate
	T* iter3 = max_element(iter1, iter2);									// a T pointer to max_element() method

	return *iter3;												// returning *iter3
}

template <class T>
T Vector<T>::min_vect(T index1, T index2)									// instantiating min_vect() method with parameters
{														// for the range
	T* iter1 = &vectPtr[index1];										// a T pointer to x coordinate
	T* iter2 = &vectPtr[index2];										// a T pointer to y coordinate
	T* iter3 = min_element(iter1, iter2);									// a T pointer to min_element() method

	return *iter3;												// returning *iter3

}

template <class T>
void Vector<T>::shuffle_vect()											// instantiating shuffle_vect() method
{
	T* iter1 = &vectPtr[0];											// a T pointer to the first element
	T* iter2 = &vectPtr[size_vect - 1];									// a T pointer to the last elemnt

	random_shuffle(iter1, iter2);										// shuffling the vector with the random_shuffle()
}														// method



template <class T>
T Vector<T>::num_elements()											// instantiating num_elements() method
{
	return size(vectPtr);											// returning the result from size() method
}

template <class T>
void Vector<T>::push_element(T value)										// instantiating push_element() method with
{														// a parameter for the new value
	vectPtr.push_back(value);										// adding the value to the vector

	size_vect += 1;												// adding 1 to the size
	cout << "\nThe new element`s been added!\n";
}

template <class T>
void Vector<T>::pop_element()											// instantiating pop_element() method
{	
	vectPtr.pop_back();											// popping the last element
	
	cout << "\nElement '" << this->size_vect << "' has been popped!\n";
	size_vect -= 1;												// substracting 1 from the size
}

template <class T>
void Vector<T>::print_vector()											// instantiating print_vector() method
{
	for (int i = 0; i < size_vect; i++)									// printing the elements
		cout << vectPtr[i] << ' ';
}

template <class T>
Vector<T>::~Vector()												// instantiating the destructor
{
	
}




#endif
