



#include "Board.h"																


Board::Board()																			// initializing the array with default values
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void Board::print_message()																// printing the games` info
{
	cout << "\n\n\tTic-Tac-Toe\n" <<
		"\n\tA game played by two players.\n" <<
		"\n\tOnce the players select their names " <<
		"\n\tand charactes, they should type coordinates " <<
		"\n\t'x' and 'y' in order to place the characters on the board.\n" <<
		"\n\tAny characters outside the board and on already " <<
		"\n\ttaken squares aren`t allowed\n";

	cout << "\n\tPress <Enter> to continue...";											// prompting the user to press Enter to
																						// continue
	cin.get();
}



void Board::print_board()																// printing the formatted board
{

	cout << '\n';

	cout << "   1   2   3\n";
	cout << " +---+---+---+\n";

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1;

		for (int j = 0; j < 3; j++)
		{
			cout << "| " << board[i][j] << " ";

			if (j == 2)
				cout << "|";
		}

		cout << "\n +---+---+---+\n";
	}
}

