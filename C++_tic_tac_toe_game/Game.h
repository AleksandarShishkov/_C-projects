



#ifndef GAME_H
#define GAME_H
#include "Board.h"												


class Game :public Board
{

private:

	string name_pl1;											
	string name_pl2;											

	char char_pl1;												
	char char_pl2;												

	int x;													
	int y;													

	
	bool valid_move;											
	int who_first;												

		


public:


	Game();													

	void set_name_pl1() override;										
	void set_name_pl2() override;										
	void set_char_pl1() override;										
	void set_char_pl2()override;										

	string get_name_pl1();											
	string get_name_pl2();											

	void set_who_first() override;										
	int get_who_first();											

	void move_pl1() override;										
	void move_pl2() override;										


	void validate_board() override;										
	void validate_pl1() override;										
	void validate_pl2() override;										

	bool get_v_board();											
	bool get_v_pl1();											
	bool get_v_pl2();											

	

	void new_game() override;										
	
	bool get_n_game();											



	~Game();												


};



#endif
