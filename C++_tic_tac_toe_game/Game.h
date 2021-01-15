



#ifndef GAME_H
#define GAME_H
#include "Board.h"												// including the base class`s header


class Game :public Board
{

private:

	string name_pl1;											// a string to hold the pl1`s name
	string name_pl2;											// a string to hold the pl2`s name

	char char_pl1;												// a char to hold pl1`s character
	char char_pl2;												// a char to hold pl2`s character

	int x;													// an integer to hold 'x' coordinate
	int y;													// an integer to hold 'y' coordinate

	
	bool valid_move;											// a boolean for move validation

	int who_first;												// an integer to hold data who begins first

		


public:


	Game();													// default constructor


	void set_name_pl1() override;										// overriding the setter for the pl1`s name
	void set_name_pl2() override;										// overriding the setter for the pl2`s name
	void set_char_pl1() override;										// overriding the setter for the pl1`s char
	void set_char_pl2()override;										// overriding the setter for the pl2`s char

	string get_name_pl1();											// getter for pl1`s name
	string get_name_pl2();											// getter for pl2`s name

	void set_who_first() override;										// overriding the setter for who_first
	int get_who_first();											// getter for who_first

	void move_pl1() override;										// overriding the setter for pl1`s move
	void move_pl2() override;										// overriding the setter for pl2`s move


	void validate_board() override;										// overriding the setter for board validation
	void validate_pl1() override;										// overriding the setter for pl1`s validation
	void validate_pl2() override;										// overriding the setter for pl2`s validation

	bool get_v_board();											// getter for the board validation
	bool get_v_pl1();											// getter for the pl1`s validation
	bool get_v_pl2();											// getter for the pl2`s validation

	

	void new_game() override;										// overriding the setter for new_game
	
	bool get_n_game();											// getter for new_game



	~Game();												// destructor



};



#endif
