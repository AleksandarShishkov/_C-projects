



#ifndef BOARD_H
#define BOARD_H

#include <iostream>												
#include <string>												

using namespace std;												



class Board													
{

protected:

	char board[3][3];											


	
	bool v_board = false;											
	bool v_pl1 = false;											
	bool v_pl2 = false;											

	bool n_game = true;											


public:

	Board();												

	void print_message();											


	virtual void set_name_pl1()										
	{	}

	virtual void set_name_pl2()										
	{	}

	virtual void set_char_pl1()										
	{	}

	virtual void set_char_pl2()										
	{	}

	virtual void set_who_first()										
	{	}

	virtual void move_pl1()											
	{	}

	virtual void move_pl2()											
	{	}



	virtual void validate_board()										
	{	}

	virtual void validate_pl1()										 
	{	}

	virtual void validate_pl2()										
	{	}


	void print_board();											
	

	virtual void new_game()											
	{	}



	virtual ~Board()											
	{	}



};



#endif
