


		/*
		 A C++ program that uses a template class
		 to allocate an array of user-defined type. 
		 It then calculates the average score
		 and display`s it on the screen.

		 The validation is handled trough
		 two exception classes.
		 */



#include "TestScores.h"																					// including TestScores header file

#include <iomanip>																						// including iomanip for formatting the output

int main()
{


	bool new_try = true;																				// a boolean set to true to control the while-loop
	char newTry;																						// a char to hold the users input




	try
	{
		TestScores<double>* testScores = new TestScores<double>(10);									// a pointer to a TestScore object of type double with
																											// parameter for the size of the array


		cout << setprecision(2) << fixed << showpoint;													// formatting the output


		cout << "\nEnter " << static_cast<int>(testScores->get_size()) << " elements (1 - 100): \n";	// promring the user to enter the elements
		testScores->set_array();																		// calling set_array() method

		cout << "\nThe averge score is: " << testScores->get_average() << '\n';							// printing the average score



	}
	catch (TestScores<double>::Exception_size<double>* e)
	{
		cout << "\n'" << e->get_size() << "' cannot be a valid size!\n";								// printing error message if an exception is cought for the size
	}
	catch (TestScores<double>::Exception_score<double>* e)
	{
		cout << "\n'" << e->get_num() << "' cannot be a valid score!\n";								// printing error message if an exception is cought fo the score
	}



	while (new_try)
	{


		try
		{
			TestScores<float>* testScoresF = new TestScores<float>;											// a pointer to a TestScore object of type float

			testScoresF->set_size();																		// colling the set_size() method

			cout << setprecision(2) << fixed << showpoint;													// formatting the output


			cout << "\nEnter " << static_cast<int>(testScoresF->get_size()) << " elements (1 - 100): \n";	// promting the user to enter elements
			testScoresF->set_array();

			cout << "\nThe average score is: " << testScoresF->get_average() << '\n';						// printing the average score
		}
		catch (TestScores<double>::Exception_size<double>* e)
		{
			cout << "\n'" << e->get_size() << "' cannot be a valid size!\n";								// printing error message if an exception is cought for the size
		}
		catch (TestScores<double>::Exception_score<double>* e)
		{
			cout << "\n'" << e->get_num() << "' cannot be a valid score!\n";								// printing error message if an exception is cought fo the score
		}



		cout << "\Another try? (y/n)> ";																	// promting the user to selet another try
		cin >> newTry;

		while (newTry != 'y' && newTry != 'n')																// validating the input
		{
			cout << "\nInvalid input. Try again> ";
			cin >> newTry;
		}

		if (newTry == 'y')
			new_try = true;
		else
			new_try = false;

	}

	cout << "\n\tThe program has ended!\n";																	// a message indicating that the program has ended


	return 0;


}