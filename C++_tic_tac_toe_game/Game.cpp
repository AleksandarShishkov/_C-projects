



#include "Game.h"



Game::Game()
{

}


void Game::set_name_pl1()
{
	cout << "\nEnter the name of player 1> ";								
	getline(cin, name_pl1);											

	while (name_pl1 == " ")											
	{
		cout << "\nInvalid input. Try again> ";
		getline(cin, name_pl1);
	}
}

void Game::set_name_pl2()
{
	cout << "\nEnter the name of player 2> ";								
	getline(cin, name_pl2);											

	while (name_pl2 == " " &&										
		name_pl2 == name_pl1)
	{
		cout << "\nInvalid input. Try agian> ";
		getline(cin, name_pl2);
	}
}

void Game::set_char_pl1()
{
	cout << "'" << name_pl1 << "' select a character> ";							
	cin >> char_pl1;											

	while (char_pl1 == ' ' && char_pl1 == char_pl2)								
	{
		cout << "\nInvalid input. Try again> ";
		cin >> char_pl1;
	}
}

void Game::set_char_pl2()
{
	cout << "'" << name_pl2 << "' select a character> ";							
	cin >> char_pl2;											

	while (char_pl2 == char_pl1 &&										
		char_pl2 == ' ')
	{
		cout << "\nInvalid input. Try again> ";
		cin >> char_pl2;
	}
}

string Game::get_name_pl1()
{
	return name_pl1;											
}

string Game::get_name_pl2()
{
	return name_pl2;											
}

void Game::set_who_first()
{
	cout << "\nSelect who will begin first (" <<								
		"1 for '" << name_pl1 << "' or 2 for '" << name_pl2 << "'> ";					
	cin >> who_first;


	while (who_first != 1 &&										
		who_first != 2)
	{
		cout << "\nInvalid input. Try again> ";
		cin >> who_first;
	}

	cout << '\n';
}

int Game::get_who_first()
{
	return who_first;											
}



void Game::move_pl1()
{
	valid_move = false;

	cout << "\n\t'" << name_pl1 <<"' select coordinates:\n";						

	while (!valid_move)
	{

		cout << "\n'x' (1-3)> ";
		cin >> x;

		while (x < 1 || x > 3)										
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> x;
		}


		cout << "\n'y' (1-3)> ";
		cin >> y;

		while (y < 1 || y > 3)										
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> y;
		}

		if (board[x - 1][y - 1] != ' ')									
		{
			cout << "\nThis square`s been taken. Select another one\n";
			valid_move = false;
		}
		else
		{
			board[x - 1][y - 1] = char_pl1;								
			valid_move = true;
		}


	}
}

void Game::move_pl2()
{
	valid_move = false;

	cout << "\n\t'" << name_pl2 << "' select coordinates:\n";						

	while (!valid_move)
	{

		cout << "\n'x' (1-3)> ";
		cin >> x;

		while (x < 1 || x > 3)										
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> x;
		}


		cout << "\n'y' (1-3)> ";
		cin >> y;

		while (y < 1 || y > 3)										
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> y;
		}

		if (board[x - 1][y - 1] != ' ')									
		{
			cout << "\nThis square`s been taken. Select another one\n";
			valid_move = false;
		}
		else
		{
			board[x - 1][y - 1] = char_pl2;								
			valid_move = true;
		}


	}
}




void Game::validate_board()
{
	if (board[0][0] != ' ' && board[0][1] != ' ' &&								
		board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' &&
		board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' &&
		board[2][2] != ' ')
	{
		cout << "\nThe game is draw!\n";
		v_board = true;
	}


	
}

bool Game::get_v_board()
{
	return v_board;												
}

void Game::validate_pl1()
{

	if (board[0][0] == char_pl1 && board[0][1] == char_pl1 &&						
		board[0][2] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[1][0] == char_pl1 && board[1][1] == char_pl1 &&
		board[1][2] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[2][0] == char_pl1 && board[2][1] == char_pl1 &&
		board[2][2] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[0][0] == char_pl1 && board[1][0] == char_pl1 &&
		board[2][0] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[0][1] == char_pl1 && board[1][1] == char_pl1 &&
		board[2][1] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[0][2] == char_pl1 && board[1][2] == char_pl1 &&
		board[2][2] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[0][0] == char_pl1 && board[1][1] == char_pl1 &&
		board[2][2] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

	if (board[0][2] == char_pl1 && board[1][1] == char_pl1 &&
		board[2][0] == char_pl1)
	{
		cout << "\n'" << name_pl1 << "' has won the game!\n";
		v_pl1 = true;
	}

}


bool Game::get_v_pl1()
{
	return v_pl1;												
}



void Game::validate_pl2()
{
	if (board[0][0] == char_pl2 && board[0][1] == char_pl2 &&						
		board[0][2] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[1][0] == char_pl2 && board[1][1] == char_pl2 &&
		board[1][2] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[2][0] == char_pl2 && board[2][1] == char_pl2 &&
		board[2][2] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[0][0] == char_pl2 && board[1][0] == char_pl2 &&
		board[2][0] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[0][1] == char_pl2 && board[1][1] == char_pl2 &&
		board[2][1] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[0][2] == char_pl2 && board[1][2] == char_pl2 &&
		board[2][2] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[0][0] == char_pl2 && board[1][1] == char_pl2 &&
		board[2][2] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}

	if (board[0][2] == char_pl2 && board[1][1] == char_pl2 &&
		board[2][0] == char_pl2)
	{
		cout << "\n'" << name_pl2 << "' has won the game!\n";
		v_pl2 = true;
	}
}


bool Game::get_v_pl2()
{
	return v_pl2;												
}


void Game::new_game()
{
	char newGame;

	
	cout << "\n Another game (y/n)> ";									
	cin >> newGame;												

	while (newGame != 'y' && newGame != 'n')
	{
		cout << "\nInvalid input. (y/n)> ";
		cin >> newGame;
	}

	if (newGame == 'n')
		n_game = false;
	else
	{
		for (int i = 0; i < 3; i++)									
		{
			for (int j = 0; j < 3; j++)
			{
				board[i][j] = ' ';
			}
		}

		v_board = false;
		v_pl1 = false;
		v_pl2 = false;

		n_game = true;
	}

	
}

bool Game::get_n_game()
{
	return n_game;												
}




Game::~Game()
{

}

