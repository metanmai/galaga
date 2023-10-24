//
// Created by Tanmai Niranjan on 23/10/23.
//

#ifndef GALAGA_GAME_HPP
#define GALAGA_GAME_HPP

#include "../Player/Player.hpp"

class Game
{
private:
	RenderWindow *window;
	Player *player;

public:
	Game();
	virtual ~Game();

	// Function
	void run();
	void update();
	void render();
};

#endif //GALAGA_GAME_HPP
