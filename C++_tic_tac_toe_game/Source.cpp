



#include "Game.h"												


void show_score(int, int, int, string, string);									


int main()
{


	Game* game = new Game;											

	
	static int draw_game = 0;										

	static int win_pl1 = 0;											

	static int win_pl2 = 0;											



	game->print_message();											

	game->set_name_pl1();											
	game->set_name_pl2();											
	
	game->set_who_first();											

	if (game->get_who_first() == 1)										
	{
		game->set_char_pl1();										
		game->set_char_pl2();										
	}
	else
	{
		game->set_char_pl2();										
		game->set_char_pl1();										
	}
	
	
	
	while (game->get_n_game())										
	{
		if (draw_game != 0 || win_pl1 != 0 ||								
			win_pl2 != 0)
			game->set_who_first();														

		game->print_board();										

		while (!game->get_v_board() || !game->get_v_pl1() ||						
			!game->get_v_pl2())
		{
			if (game->get_who_first() == 1)								
			{
				game->move_pl1();								
				game->print_board();								
				game->validate_board();								
				game->validate_pl1();								

				if (game->get_v_pl1())													
				{
					win_pl1++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();									
					break;									
				}
				else if (game->get_v_board())
				{
					draw_game++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}


				game->move_pl2();								
				game->print_board();								
				game->validate_board();								
				game->validate_pl2();								

				if (game->get_v_pl2())
				{
					win_pl2++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}
				else if (game->get_v_board())
				{
					draw_game++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}


			}
			else
			{
				game->move_pl2();								
				game->print_board();								
				game->validate_board();								
				game->validate_pl2();								

				if (game->get_v_pl2())
				{
					win_pl2++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}
				else if (game->get_v_board())
				{
					draw_game++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}
				

				game->move_pl1();								
				game->print_board();								
				game->validate_board();								
				game->validate_pl1();								

				if (game->get_v_pl1())
				{
					win_pl1++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}
				else if (game->get_v_board())
				{
					draw_game++;								
					show_score(draw_game, win_pl1, win_pl2,					
						game->get_name_pl1(), game->get_name_pl2());
					game->new_game();							
					cin.get();
					break;									
				}
			}
		}
	}




	cout << "\nThe game has ended!\n";									

	delete game;												



	return 0;
}



void show_score(int draw_game, int v_pl1, int v_pl2, string s1, string s2)					
{
	cout << "\n\n\tCurrent result: \n";									
	cout << "\nScore '" << s1 << "': " << v_pl1 << '\n';
	cout << "Score '" << s2 << "': " << v_pl2 << '\n';
	cout << "Game draw: " << draw_game << '\n';
}
