#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <iostream>

using namespace std;


template <typename C>													
class TestScores
{

private:

	C *scores = nullptr;												
	int size;													


public:


	TestScores();													
	TestScores(int);												

	template <typename E>												 
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


	template <typename E>												
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


	void set_size();												
	C get_size();													

	void set_array();												
	C get_average();												



	~TestScores()													
	{
		delete scores;												
	}
};


template <typename C>													
TestScores<C>::TestScores()
{

}


template <typename C>													
TestScores<C>::TestScores(int size)											
{
	if (size < 1)													
		throw Exception_size<C>(size);										
	else
		this->size = size;
	scores = new C[size];												
}


template <typename C>													
void TestScores<C>::set_size()
{
	cout << "\nEnter the size> ";
	cin >> size;

	if (size < 1)													
		throw Exception_size<C>(size);										
	else
		scores = new C[size];											

}


template <typename C>													
C TestScores<C>::get_size()
{
	return this->size;
}


template <typename C>													
void TestScores<C>::set_array()
{
	
	for (int i = 0; i < size; i++)											
	{
		cout << "\nEnter element " << i + 1 << "> ";
		cin >> *(scores + i);

		if (*(scores + i) < 0 || *(scores + i) > 100)								
			throw Exception_score<C>(*(scores + i));							
	
	}
}



template <typename C>													
C TestScores<C>::get_average()
{
	C average = 0;													

	for (int i = 0; i < size; i++)
	{
		average += *(scores + i);
	}

	return average / size;												
}




#endif

