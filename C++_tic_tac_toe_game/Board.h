



#ifndef BOARD_H
#define BOARD_H

#include <iostream>												// including the iostream library
#include <string>												// including the string library

using namespace std;												// using the std namespace



class Board													// base class Board
{

protected:

	char board[3][3];											// an array of characters for the board


	
	bool v_board = false;											// a boolean for board validation
	bool v_pl1 = false;											// a boolean for pl1 validation
	bool v_pl2 = false;											// a boolean for pl2 validation

	bool n_game = true;											// a boolean for new game validation



public:

	Board();												// default constructor


	void print_message();											// setter for the message


	virtual void set_name_pl1()										// virtual setter for pl1`s name
	{	}

	virtual void set_name_pl2()										// virtual setter for pl2`s name
	{	}

	virtual void set_char_pl1()										// virtual setter for pl1`s char
	{	}

	virtual void set_char_pl2()										// virtual setter for pl2`s char
	{	}

	virtual void set_who_first()										// virtual setter for who_first
	{	}

	virtual void move_pl1()											// virtual setter for pl1`s move
	{	}

	virtual void move_pl2()											// virtual setter for pl2`s move
	{	}



	virtual void validate_board()										// virtual setter for board validation
	{	}

	virtual void validate_pl1()										// virtual setter for pl1`s validation 
	{	}

	virtual void validate_pl2()										// virtual setter for pl2`s validation
	{	}


	void print_board();											// method for printing the board
	

	virtual void new_game()											// virtual setter for new_game
	{	}



	virtual ~Board()											// virtual destructor
	{	}



};



#endif
