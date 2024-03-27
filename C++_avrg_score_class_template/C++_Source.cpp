
#include "TestScores.h"													

#include <iomanip>													

int main()
{


	bool new_try = true;												
	char newTry;													




	try
	{
		TestScores<double>* testScores = new TestScores<double>(10);						
															


		cout << setprecision(2) << fixed << showpoint;								

		cout << "\nEnter " << static_cast<int>(testScores->get_size()) << " elements (1 - 100): \n";		
		testScores->set_array();										

		cout << "\nThe averge score is: " << testScores->get_average() << '\n';					



	}
	catch (TestScores<double>::Exception_size<double>* e)
	{
		cout << "\n'" << e->get_size() << "' cannot be a valid size!\n";					
	}
	catch (TestScores<double>::Exception_score<double>* e)
	{
		cout << "\n'" << e->get_num() << "' cannot be a valid score!\n";					
	}



	while (new_try)
	{


		try
		{
			TestScores<float>* testScoresF = new TestScores<float>;						

			testScoresF->set_size();									

			cout << setprecision(2) << fixed << showpoint;							


			cout << "\nEnter " << static_cast<int>(testScoresF->get_size()) << " elements (1 - 100): \n";				testScoresF->set_array();

			cout << "\nThe average score is: " << testScoresF->get_average() << '\n';			
		}
		catch (TestScores<double>::Exception_size<double>* e)
		{
			cout << "\n'" << e->get_size() << "' cannot be a valid size!\n";				
		}
		catch (TestScores<double>::Exception_score<double>* e)
		{
			cout << "\n'" << e->get_num() << "' cannot be a valid score!\n";				
		}



		cout << "\Another try? (y/n)> ";									
		cin >> newTry;

		while (newTry != 'y' && newTry != 'n')									
		{
			cout << "\nInvalid input. Try again> ";
			cin >> newTry;
		}

		if (newTry == 'y')
			new_try = true;
		else
			new_try = false;

	}

	cout << "\n\tThe program has ended!\n";										


	return 0;


}
