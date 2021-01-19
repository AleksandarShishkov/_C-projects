#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <iostream>

using namespace std;


template <typename C>										// a template class TestScores
class TestScores
{

private:

	C *scores = nullptr;									// a template pointer to the array
	int size;										// an integer to hold the size


public:


	TestScores();										// default constructor

	TestScores(int);									// constructor with parameter for the array`s size

	template <typename E>									// a template class for the value exception 
	class Exception_score
	{
	private:
		E num;

	public:
		Exception_score<E>(E num)
		{
			this->num = num;
		}

		E get_num()
		{
			return this->num;
		}
	};


	template <typename E>									// a template class for the size exception
	class Exception_size
	{
	private:

		E size;

	public:

		Exception_size(E size)
		{
			this->size = size;
		}

		E get_size()
		{
			return this->size;
		}
	};


	void set_size();									// setter for the size
	C get_size();										// getter for the size

	void set_array();									// setter for the array
	C get_average();									// getter fro the average score




	~TestScores()										// destructor
	{
		delete scores;									// freeing the allocated memory
	}
};


template <typename C>										// impementation of the default costructor
TestScores<C>::TestScores()
{

}


template <typename C>										// implementation of the constructor with parameter
TestScores<C>::TestScores(int size)								// for the size
{
	if (size < 1)										// validating the size
		throw Exception_size<C>(size);							// throwing an exception if invalid
	else
		this->size = size;
	scores = new C[size];									// allocating the array if valid
}


template <typename C>										// implementation of the setter for the size
void TestScores<C>::set_size()
{
	cout << "\nEnter the size> ";
	cin >> size;

	if (size < 1)										// validating the input
		throw Exception_size<C>(size);							// throwing an exception if invalid
	else
		scores = new C[size];								// allocating the array if valid

}


template <typename C>										// implementation of the getter for the size
C TestScores<C>::get_size()
{
	return this->size;
}


template <typename C>										// implementation of the setter for the array
void TestScores<C>::set_array()
{
	
	for (int i = 0; i < size; i++)								// promting the user to enter the elements
	{
		cout << "\nEnter element " << i + 1 << "> ";
		cin >> *(scores + i);

		if (*(scores + i) < 0 || *(scores + i) > 100)					// validating the input
			throw Exception_score<C>(*(scores + i));				// throwing an exception if invalid

	}
}



template <typename C>										// implementation of the getter for the average
C TestScores<C>::get_average()
{
	C average = 0;										// a template variable to hold the average

	for (int i = 0; i < size; i++)
	{
		average += *(scores + i);
	}

	return average / size;									// returning the result
}




#endif

