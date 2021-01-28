


		/*
		 A C++ program that uses a class template
		 to instantiate a vectors as objects of different types.
		 It then prompts the user to select an option
		 for manipulating the vetcor and its
		 elements.
 
		 The program uses nested option menues, try-catch
		 blocks, if-else statements, while loops and and
		 switch statements for flow control.
		 */





#include "Vector.h"																// including the Vector header



int options();																	// a function prototype

int main()
{

	
	int choice = 1;																// an integer to hold the choice for the main options
	int choice_;																// an integer to hold the choice for the vector options


	int value;																	// an integer to hold the value for a vector of ints
	int* ptrX = nullptr;														// a pointer to an int
	int x;																		// an integer to hold position 1
	int y;																		// an integer to hold position 2
	int num_elements;															// an integer to hold the number of the elements
	double valueD;																// a double to hold the value for a vector of doubles
	double* ptrD = nullptr;														// a pointer to a double
	double xD;																	// a double to hold position 1
	char valueC;																// a char to hold the value for a vector of chars
	char* ptrC = nullptr;														// a pointer to a char 
	char xC;																	// a char to hold position 1
	




	try																			// validating for exceptions
	{

		while (choice != 0)														// outer while loop
		{
			choice = options();													// calling the options() function

			if (choice == 1)													// validating the input
			{

				choice_ = 1;													// setting choice_ to 1

				Vector<int>* vectInt = new Vector<int>;							// instantiating a pointer to vector of ints
				vectInt->set_size();											// calling set_size() method
				vectInt->set_elements();										// calling set_elements() method


				while (choice_ != 0)											// inner while loop
				{
					choice_ = vectInt->options_();								// calling oiptions_() method

					switch (choice_)											// switching the choice
					{
					case 1:

						cout << "\nEnter the value> ";							// promting the user to enter a value
						cin >> value;

						cout << "\n" << value << " is encountered '" <<			// printing the output
							vectInt->mode(value) << "' times in the vector!\n";

						break;

					case 2:

						x = 5;
						ptrX = &x;												// setting ptrX to point to the address of x

						cout << "\nThe value of 'ptrX' is " << *ptrX << '\n';

						cout << "\nEnter a value> ";							// promting the user to enter a value
						cin >> value;

						*ptrX = vectInt->find_element(value);					// calling find_element() method

						if (*ptrX != 5)											// printing the output
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrX << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;

					case 3:

						cout << "\nEnter a value> ";							// promting the user to enter a value
						cin >> value;

						vectInt->sort_vect();									// ca;;omg sort_vect() method

						if (vectInt->b_search(value))							// printing the output
							cout << "\n'" << value << "' was located in the vector\n";
						else
							cout << "\n'" << value << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";							// promting the user to enter a value
						cin >> value;

						vectInt->for_each_vect(value);							// calling for_each_vect() method

						cout << "\n'" << value << "' has been added to the elements!\n";

						break;

					case 5:

						cout << "\nEnter the range (x, y) \n";					// promting the user to enter x and y coordinates
						cout << "x> ";
						cin >> x;

						while (x<1 || x>vectInt->get_size() + 1)				// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectInt->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectInt->get_size())							// calling get_size() method and printing
						{														// the output
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectInt->max_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectInt->max_vect(x - 1, y - 1) << "'\n";

						}

						break;


					case 6:

						cout << "\nEnter the range (x, y) \n";					// promting the user to enter x and y
						cout << "x> ";
						cin >> x;

						while (x<1 || x>vectInt->get_size() + 1)				// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectInt->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectInt->get_size())							// printing the ouptu
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectInt->min_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectInt->min_vect(x - 1, y - 1) << "'\n";
						}

						break;


					case 7:

						vectInt->shuffle_vect();								// calling shuffle_vect() method

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectInt->sort_vect();									// calling sort_vect() method

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectInt->num_elements();					// calling num_elements() method

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		// promting the user to enter a value
						cin >> value;

						vectInt->push_element(value);							// calling push_element() method

						break;


					case 11:

						vectInt->pop_element();									// calling pop_element() method
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectInt->print_vector();								// calling print_vector() method

						break;

					}

				}
			}
			else if (choice == 2)
			{

				choice_ = 1;													// setting choice_ to 1
				
				Vector<double>* vectDouble = new Vector<double>;				// instantiating a pointer to vector of doubles
				vectDouble->set_size();											// calling set_size() method
				vectDouble->set_elements();										// calling set_elements() method

				while (choice_ != 0)											// inner while loop
				{
					choice_ = vectDouble->options_();							// calling options_() method

					switch (choice_)											// switching the choice
					{
					case 1:

						cout << "\nEnter the value> ";							// promting the user to enter a value
						cin >> valueD;

						cout << "\n" << valueD << " is encountered '"			// calling the mode() method
							<< vectDouble->mode(valueD) << "' times in the vector!\n";

						break;


					case 2:

						xD = 5;													// setting xD to 5
						ptrD = &xD;												// setting ptrD to point to the address of xD

						cout << "\nThe value of 'ptrX' is " << *ptrD << '\n';

						cout << "\nEnter a value> ";							// promting the user to enter a value
						cin >> valueD;

						*ptrD = vectDouble->find_element(valueD);				// calling find_eleemnt() method

						if (*ptrD != 5)											// prionting the output
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrD << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;


					case 3:

						cout << "\nEnter a value> ";							// promting the user to enter a value
						cin >> valueD;

						vectDouble->sort_vect();								// calling sort_ver() method

						if (vectDouble->b_search(valueD))						// calling b_search() method
							cout << "\n'" << valueD << "' was located in the vector\n";
						else
							cout << "\n'" << valueD << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";							// promting the user to enter a value
						cin >> valueD;

						vectDouble->for_each_vect(valueD);						// calling the for_each_vect() method

						cout << "\n'" << valueD << "' has been added to the elements!\n";

						break;

					case 5:

						cout << "\nEnter the range (x, y) \n";					// prompting the user to enter x and y coordinates
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectDouble->get_size() + 1)			// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectDouble->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectDouble->get_size())							// calling get_size() method
						{
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectDouble->max_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectDouble->max_vect(x - 1, y - 1) << "'\n";

						}

						break;


					case 6:

						cout << "\nEnter the range (x, y) \n";					// promting the user to enter x and y coordinates
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectDouble->get_size() + 1)			// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectDouble->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectDouble->get_size())							// calling get_size() method
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectDouble->min_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectDouble->min_vect(x - 1, y - 1) << "'\n";
						}

						break;


					case 7:

						vectDouble->shuffle_vect();								// calling shuffle_vect() method

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectDouble->sort_vect();								// calling sort_vect() method

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectDouble->num_elements();				// calling num_elements() method

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		// promting the userr to enter a value
						cin >> valueD;

						vectDouble->push_element(valueD);						// calling the push_element() method

						break;


					case 11:

						vectDouble->pop_element();								// calling the pop+_elemetn() method
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectDouble->print_vector();								// calling the print_vector() method
							
						break;

					}

				}

				
			}
			else if (choice == 3)
			{
				choice_ = 1;													// setting choice_ to 1

				Vector<char>* vectChar = new Vector<char>;						// instantiating a pointer to vecotr of chars
				vectChar->set_size();											// calling the set_size() method
				vectChar->set_elements();										// calling the set_elements() method

				while (choice_ != 0)											// inner while loop
				{
					choice_ = vectChar->options_();								// calling options_() method

					switch (choice_)											// switching the choice
					{
					case 1:

						cout << "\nEnter the value> ";							// promting the user to enter a char
						cin >> valueC;

						cout << "\n" << valueC << " is encountered '"			// calling the mode() method 
							<< vectChar->mode(valueC) << "' times in the vector!\n";

						break;


					case 2:

						xC = 5;													// setting xC to 5
						ptrC = &xC;												// setting ptrC to point the the address of xC

						cout << "\nThe value of 'ptrX' is " << *ptrC << '\n';

						cout << "\nEnter a value> ";							// promting the user to enter a character
						cin >> valueC;

						*ptrC = vectChar->find_element(valueC);					// calling the find_element() method

						if (*ptrC != 5)											// printing the output
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrC << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;


					case 3:

						cout << "\nEnter a value> ";							// promting the user to enter a char
						cin >> valueC;

						vectChar->sort_vect();									// calling the sort_vect() method

						if (vectChar->b_search(valueC))
							cout << "\n'" << valueC << "' was located in the vector\n";
						else
							cout << "\n'" << valueC << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";							// prompting the user to enter a char ot an int
						cin >> valueC;

						vectChar->for_each_vect(valueC);						// calling the for_each_vect() method

						cout << "\n'" << valueC << "' has been added to the elements!\n";

						break;


					case 5:

						cout << "\nEnter the range (x, y) \n";					// promting the user to enter x and y coordinates
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectChar->get_size() + 1)			// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectChar->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectChar->get_size())							// calling the get_size() method
						{
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectChar->max_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe greatest value in range " << x << " - " << y 
								<< " is: '" << vectChar->max_vect(x - 1, y - 1) << "'\n";

						}

						break;


					case 6:

						cout << "\nEnter the range (x, y) \n";					// promting the user to enter x and y coordinates
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectChar->get_size() + 1)			// validating the input
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectChar->get_size() + 1)		// validating the input
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectChar->get_size())							// calling the get_size() method
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectChar->min_vect(x - 1, y) << "'\n";
						}
						else
						{
							cout << "\nThe least value in range " << x << " - " << y 
								<< " is: '" << vectChar->min_vect(x - 1, y - 1) << "'\n";
						}

						break;


					case 7:

						vectChar->shuffle_vect();								// calling the shuffle_vect() method

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectChar->sort_vect();									// calling the sort_vect() method

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectChar->num_elements();				// calling the num_elements() method

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		// promting the user to enter a char
						cin >> valueC;

						vectChar->push_element(valueC);							// calling the push_element() method

						break;


					case 11:

						vectChar->pop_element();								// calling the pop_element() method
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectChar->print_vector();								// calling the print_vector() method

						break;

					}

				}


			}


		}


	}
	catch (Vector<int>::ExceptionSize s)										// catch block for the size of the vector of ints
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";
		
	}
	catch (Vector<double>::ExceptionSize s)										// catch block for the size of the vector of doubles
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";

	}
	catch (Vector<char>::ExceptionSize s)										// catch block for the size of the vector of chars
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";

	}

	cout << "\nThe program has ended!\n";										// a message indicating that the program has edned

	return 0;
}


int options()																	// definition of options menu
{
	int choice;

	cout << "\n\n\tSelect between the following:\n";
	cout << "\n\t'1' for vector of integers";
	cout << "\n\t'2' for vector of doubles";
	cout << "\n\t'3' for vector of characters";
	cout << "\n\t'0' to quit";

	cout << "\n\t> ";															// promting the user to enter the choice
	cin >> choice;

	while (choice < 0 || choice > 3)											// validating the choice
	{
		cout << "\n'" << choice << "' cannot be a valid choice. Try again> ";
		cin >> choice;
	}

	return choice;																// returning the choice
}



