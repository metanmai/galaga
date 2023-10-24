//
// Created by Tanmai Niranjan on 24/10/23.
//

#ifndef GALAGA_PLAYER_HPP
#define GALAGA_PLAYER_HPP
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

class Player
{
private:
	Sprite sprite{};
	Texture texture{};

public:
	Player();
	virtual ~Player();

	// Functions
	void update();
	void render(RenderTarget &target);
};


#endif //GALAGA_PLAYER_HPP
