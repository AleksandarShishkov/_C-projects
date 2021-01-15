



#include "Game.h"												// including Game`s header


void show_score(int, int, int, string, string);									// a function prototype for the current score


int main()
{


	Game* game = new Game;											// instantiating a pointer to Game`s object

	
	static int draw_game = 0;										// a static integer to hold the score for game_draw

	static int win_pl1 = 0;											// a static integer to hold the score for pl1

	static int win_pl2 = 0;											// a static integer to hold the score for pl2



	game->print_message();											// calling the print method

	game->set_name_pl1();											// calling the setter for pl1`s name
	game->set_name_pl2();											// calling the setter for pl2`s name
	
	game->set_who_first();											// calling the setter for who_first

	if (game->get_who_first() == 1)										// validating the input
	{
		game->set_char_pl1();										// calling the setter for pl1`s char
		game->set_char_pl2();										// calling the setter for pl2`s char
	}
	else
	{
		game->set_char_pl2();										// calling the setter for pl2`s char
		game->set_char_pl1();										// calling the setter for pl1`s char
	}
	
	
	
	while (game->get_n_game())										// entering the outer game-loop
	{
		if (draw_game != 0 || win_pl1 != 0 ||								// validating the score
			win_pl2 != 0)
			game->set_who_first();														

		game->print_board();										// printing the board

		while (!game->get_v_board() || !game->get_v_pl1() ||						// entering the inner game-loop
			!game->get_v_pl2())
		{
			if (game->get_who_first() == 1)								// validating the who_first input
			{
				game->move_pl1();								// calling the setter for pl1`s move
				game->print_board();								// printing the board
				game->validate_board();								// validating the board
				game->validate_pl1();								// validating the pl1`s win

				if (game->get_v_pl1())													
				{
					win_pl1++;								// incrementing win_pl1
					show_score(draw_game, win_pl1, win_pl2,					// calling show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new_game
					cin.get();									
					break;									// breaking out of the loop
				}
				else if (game->get_v_board())
				{
					draw_game++;								// incrementing the draw_game
					show_score(draw_game, win_pl1, win_pl2,					// calling show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new_game
					cin.get();
					break;									// breaking out of the loop
				}


				game->move_pl2();								// calling the setter for pl2`s move
				game->print_board();								// printing the board
				game->validate_board();								// validating the board
				game->validate_pl2();								// validating the pl2`s win

				if (game->get_v_pl2())
				{
					win_pl2++;								// incrementing win_pl2
					show_score(draw_game, win_pl1, win_pl2,					// calling show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// breaking out of the lool
				}
				else if (game->get_v_board())
				{
					draw_game++;								// incrementing draw_game
					show_score(draw_game, win_pl1, win_pl2,					// calling show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// breaking out of the loop
				}


			}
			else
			{
				game->move_pl2();								// calling the setter for pl2`s move
				game->print_board();								// printing the board
				game->validate_board();								// validating the board
				game->validate_pl2();								// validating pl2`s win

				if (game->get_v_pl2())
				{
					win_pl2++;								// incrementing win_pl2
					show_score(draw_game, win_pl1, win_pl2,					// calling show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// breaking out of the loop
				}
				else if (game->get_v_board())
				{
					draw_game++;								// incrementing draw_game
					show_score(draw_game, win_pl1, win_pl2,					// calling the show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// breaking out of the loop
				}
				

				game->move_pl1();								// calling the setter for pl1`s move
				game->print_board();								// printing the board
				game->validate_board();								// validating the board
				game->validate_pl1();								// validating the pl1`s win

				if (game->get_v_pl1())
				{
					win_pl1++;								// incrementing win_pl1
					show_score(draw_game, win_pl1, win_pl2,					// calling the show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// beraking out of the loop
				}
				else if (game->get_v_board())
				{
					draw_game++;								// incrementing draw_game
					show_score(draw_game, win_pl1, win_pl2,					// calling the show_score function
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							// calling the setter for new game
					cin.get();
					break;									// breaking out of the loop
				}
			}
		}
	}




	cout << "\nThe game has ended!\n";									// printing message indicating the end of the program

	delete game;												// releasing the allocated memory



	return 0;
}



void show_score(int draw_game, int v_pl1, int v_pl2, string s1, string s2)					// a function declaration for thecurrent score
{
	cout << "\n\n\tCurrent result: \n";									// printing the formatted score
	cout << "\nScore '" << s1 << "': " << v_pl1 << '\n';
	cout << "Score '" << s2 << "': " << v_pl2 << '\n';
	cout << "Game draw: " << draw_game << '\n';
}
