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
	float mvmtspeed{};

public:
	Player();
	~Player() = default;

	// Functions
	void move(float xdir, float ydir, float deltaTime);
	void update(float deltaTime);
	void render(RenderTarget &target);
};


#endif //GALAGA_PLAYER_HPP
