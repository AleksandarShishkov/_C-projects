



#include "Game.h"



Game::Game()
{

}


void Game::set_name_pl1()
{
	cout << "\nEnter the name of player 1> ";								// prompting the user to select name
	getline(cin, name_pl1);											// for pl1

	while (name_pl1 == " ")											// validating the input
	{
		cout << "\nInvalid input. Try again> ";
		getline(cin, name_pl1);
	}
}

void Game::set_name_pl2()
{
	cout << "\nEnter the name of player 2> ";								// prompting the user to select name
	getline(cin, name_pl2);											// for pl2

	while (name_pl2 == " " &&										// validating the input
		name_pl2 == name_pl1)
	{
		cout << "\nInvalid input. Try agian> ";
		getline(cin, name_pl2);
	}
}

void Game::set_char_pl1()
{
	cout << "'" << name_pl1 << "' select a character> ";							// prompting the user to select char
	cin >> char_pl1;											// for pl1

	while (char_pl1 == ' ' && char_pl1 == char_pl2)								// validating the input
	{
		cout << "\nInvalid input. Try again> ";
		cin >> char_pl1;
	}
}

void Game::set_char_pl2()
{
	cout << "'" << name_pl2 << "' select a character> ";							// prompting the user to select char
	cin >> char_pl2;											// for pl2

	while (char_pl2 == char_pl1 &&										// validating the input
		char_pl2 == ' ')
	{
		cout << "\nInvalid input. Try again> ";
		cin >> char_pl2;
	}
}

string Game::get_name_pl1()
{
	return name_pl1;											// returning pl1`s name
}

string Game::get_name_pl2()
{
	return name_pl2;											// returning pl2`s name
}

void Game::set_who_first()
{
	cout << "\nSelect who will begin first (" <<								// prompting the user to select
		"1 for '" << name_pl1 << "' or 2 for '" << name_pl2 << "'> ";					// who begins first
	cin >> who_first;


	while (who_first != 1 &&										// validating the input
		who_first != 2)
	{
		cout << "\nInvalid input. Try again> ";
		cin >> who_first;
	}

	cout << '\n';
}

int Game::get_who_first()
{
	return who_first;											// returning who_furst
}



void Game::move_pl1()
{
	valid_move = false;

	cout << "\n\t'" << name_pl1 <<"' select coordinates:\n";						// prompting the user to select a square

	while (!valid_move)
	{

		cout << "\n'x' (1-3)> ";
		cin >> x;

		while (x < 1 || x > 3)										// validating the input for 'x' coordinate
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> x;
		}


		cout << "\n'y' (1-3)> ";
		cin >> y;

		while (y < 1 || y > 3)										// validating the input for 'y' coordinate
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> y;
		}

		if (board[x - 1][y - 1] != ' ')									// validating the square
		{
			cout << "\nThis square`s been taken. Select another one\n";
			valid_move = false;
		}
		else
		{
			board[x - 1][y - 1] = char_pl1;								// assigning pl1`s char to the selected square
			valid_move = true;
		}


	}
}

void Game::move_pl2()
{
	valid_move = false;

	cout << "\n\t'" << name_pl2 << "' select coordinates:\n";						// prompting thr user to select a square

	while (!valid_move)
	{

		cout << "\n'x' (1-3)> ";
		cin >> x;

		while (x < 1 || x > 3)										// validating the input for 'x' coordinate
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> x;
		}


		cout << "\n'y' (1-3)> ";
		cin >> y;

		while (y < 1 || y > 3)										// validating the input for 'y' coordinate
		{
			cout << "\nInvalid input. (1-3)> ";
			cin >> y;
		}

		if (board[x - 1][y - 1] != ' ')									// validating the square
		{
			cout << "\nThis square`s been taken. Select another one\n";
			valid_move = false;
		}
		else
		{
			board[x - 1][y - 1] = char_pl2;								// assigning pl2`s char to the selected square
			valid_move = true;
		}


	}
}




void Game::validate_board()
{
	if (board[0][0] != ' ' && board[0][1] != ' ' &&								// validating the board
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
	return v_board;												// returning the result
}

void Game::validate_pl1()
{

	if (board[0][0] == char_pl1 && board[0][1] == char_pl1 &&						// validating pl1`s moves
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
	return v_pl1;												// returning the result
}



void Game::validate_pl2()
{
	if (board[0][0] == char_pl2 && board[0][1] == char_pl2 &&						// validating pl2`s move
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
	return v_pl2;												// validating the result
}


void Game::new_game()
{
	char newGame;

	
	cout << "\n Another game (y/n)> ";									// prompting the user to select
	cin >> newGame;												// a new game

	while (newGame != 'y' && newGame != 'n')
	{
		cout << "\nInvalid input. (y/n)> ";
		cin >> newGame;
	}

	if (newGame == 'n')
		n_game = false;
	else
	{
		for (int i = 0; i < 3; i++)									// re-setting the board
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
	return n_game;												// returning the result
}




Game::~Game()
{

}

