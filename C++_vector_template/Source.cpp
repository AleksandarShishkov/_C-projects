

#include "Vector.h"												



int options();													
int main()
{

	
	int choice = 1;												
	int choice_;												


	int value;												
	int* ptrX = nullptr;											
	int x;													
	int y;													
	int num_elements;											
	double valueD;												
	double* ptrD = nullptr;											
	double xD;												
	char valueC;												
	char* ptrC = nullptr;											 
	char xC;												
	




	try													
	{

		while (choice != 0)										
		{
			choice = options();									

			if (choice == 1)									
			{

				choice_ = 1;									

				Vector<int>* vectInt = new Vector<int>;						
				vectInt->set_size();								
				vectInt->set_elements();							


				while (choice_ != 0)								
				{
					choice_ = vectInt->options_();						

					switch (choice_)							
					{
					case 1:

						cout << "\nEnter the value> ";					
						cin >> value;

						cout << "\n" << value << " is encountered '" <<			
							vectInt->mode(value) << "' times in the vector!\n";

						break;

					case 2:

						x = 5;
						ptrX = &x;							

						cout << "\nThe value of 'ptrX' is " << *ptrX << '\n';

						cout << "\nEnter a value> ";					
						cin >> value;

						*ptrX = vectInt->find_element(value);				

						if (*ptrX != 5)							
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrX << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;

					case 3:

						cout << "\nEnter a value> ";					
						cin >> value;

						vectInt->sort_vect();						

						if (vectInt->b_search(value))					
							cout << "\n'" << value << "' was located in the vector\n";
						else
							cout << "\n'" << value << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";					
						cin >> value;

						vectInt->for_each_vect(value);					

						cout << "\n'" << value << "' has been added to the elements!\n";

						break;

					case 5:

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x<1 || x>vectInt->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectInt->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectInt->get_size())					
						{								
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

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x<1 || x>vectInt->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectInt->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectInt->get_size())					
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

						vectInt->shuffle_vect();					

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectInt->sort_vect();						

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectInt->num_elements();				

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		
						cin >> value;

						vectInt->push_element(value);					

						break;


					case 11:

						vectInt->pop_element();						
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectInt->print_vector();					

						break;

					}

				}
			}
			else if (choice == 2)
			{

				choice_ = 1;									
				
				Vector<double>* vectDouble = new Vector<double>;				
				vectDouble->set_size();								
				vectDouble->set_elements();							

				while (choice_ != 0)								
				{
					choice_ = vectDouble->options_();					

					switch (choice_)							
					{
					case 1:

						cout << "\nEnter the value> ";					
						cin >> valueD;

						cout << "\n" << valueD << " is encountered '"			
							<< vectDouble->mode(valueD) << "' times in the vector!\n";

						break;


					case 2:

						xD = 5;								
						ptrD = &xD;							

						cout << "\nThe value of 'ptrX' is " << *ptrD << '\n';

						cout << "\nEnter a value> ";					
						cin >> valueD;

						*ptrD = vectDouble->find_element(valueD);			

						if (*ptrD != 5)							
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrD << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;


					case 3:

						cout << "\nEnter a value> ";					
						cin >> valueD;

						vectDouble->sort_vect();					

						if (vectDouble->b_search(valueD))				
							cout << "\n'" << valueD << "' was located in the vector\n";
						else
							cout << "\n'" << valueD << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";					
						cin >> valueD;

						vectDouble->for_each_vect(valueD);				

						cout << "\n'" << valueD << "' has been added to the elements!\n";

						break;

					case 5:

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectDouble->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectDouble->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectDouble->get_size())					
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

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectDouble->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectDouble->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectDouble->get_size())					
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

						vectDouble->shuffle_vect();					

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectDouble->sort_vect();					

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectDouble->num_elements();			

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		
						cin >> valueD;

						vectDouble->push_element(valueD);				

						break;


					case 11:

						vectDouble->pop_element();					
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectDouble->print_vector();					
							
						break;

					}

				}

				
			}
			else if (choice == 3)
			{
				choice_ = 1;									

				Vector<char>* vectChar = new Vector<char>;					
				vectChar->set_size();								
				vectChar->set_elements();							

				while (choice_ != 0)								
				{
					choice_ = vectChar->options_();						

					switch (choice_)							
					{
					case 1:

						cout << "\nEnter the value> ";					
						cin >> valueC;

						cout << "\n" << valueC << " is encountered '"			 
							<< vectChar->mode(valueC) << "' times in the vector!\n";

						break;


					case 2:

						xC = 5;								
						ptrC = &xC;							

						cout << "\nThe value of 'ptrX' is " << *ptrC << '\n';

						cout << "\nEnter a value> ";					
						cin >> valueC;

						*ptrC = vectChar->find_element(valueC);				

						if (*ptrC != 5)							
						{
							cout << "\nNow the value of 'ptrX' is " << *ptrC << '\n';
						}
						else
							cout << "\nNo such element located!\n";

						break;


					case 3:

						cout << "\nEnter a value> ";					
						cin >> valueC;

						vectChar->sort_vect();						

						if (vectChar->b_search(valueC))
							cout << "\n'" << valueC << "' was located in the vector\n";
						else
							cout << "\n'" << valueC << "' isn`t in the vector\n";

						break;


					case 4:

						cout << "\nEnter the value> ";					
						cin >> valueC;

						vectChar->for_each_vect(valueC);				

						cout << "\n'" << valueC << "' has been added to the elements!\n";

						break;


					case 5:

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectChar->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectChar->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectChar->get_size())					
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

						cout << "\nEnter the range (x, y) \n";				
						cout << "x> ";
						cin >> x;

						while (x < 1 || x > vectChar->get_size() + 1)			
						{
							cout << "'" << x << "' cannot be a valid point. Try again> ";
							cin >> x;
						}

						cout << "\ny> ";
						cin >> y;

						while (y < x + 1 || y > vectChar->get_size() + 1)		
						{
							cout << "'" << y << "' cannot be a valid point. Try again> ";
							cin >> y;
						}

						if (y < vectChar->get_size())					
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

						vectChar->shuffle_vect();					

						cout << "\nThe vector`s been shuffled!\n";

						break;


					case 8:

						vectChar->sort_vect();						

						cout << "\nThe vector`s been sorted in ascending order!\n";

						break;


					case 9:

						num_elements = vectChar->num_elements();			

						cout << "\nThe vector has '" << num_elements << "' elements!\n";

						break;


					case 10:

						cout << "\nEnter the value for the new element> ";		
						cin >> valueC;

						vectChar->push_element(valueC);					

						break;


					case 11:

						vectChar->pop_element();					
						break;

					case 12:

						cout << "\nThe vector is: \n";

						vectChar->print_vector();					

						break;

					}

				}


			}


		}


	}
	catch (Vector<int>::ExceptionSize s)									
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";
		
	}
	catch (Vector<double>::ExceptionSize s)									
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";

	}
	catch (Vector<char>::ExceptionSize s)									
	{
		cout << "'" << s.get_size() << "' cannot be a valid size!\n";
		cout << "\nTry agian next time!\n";

	}

	cout << "\nThe program has ended!\n";									

	return 0;
}


int options()													
{
	int choice;

	cout << "\n\n\tSelect between the following:\n";
	cout << "\n\t'1' for vector of integers";
	cout << "\n\t'2' for vector of doubles";
	cout << "\n\t'3' for vector of characters";
	cout << "\n\t'0' to quit";

	cout << "\n\t> ";											
	cin >> choice;

	while (choice < 0 || choice > 3)									
	{
		cout << "\n'" << choice << "' cannot be a valid choice. Try again> ";
		cin >> choice;
	}

	return choice;												
}



