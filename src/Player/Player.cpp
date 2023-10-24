//
// Created by Tanmai Niranjan on 24/10/23.
//

#include "Player.hpp"
#include <iostream>

Player::Player()
{
	// Textures should be loaded first.
	auto response = texture.loadFromFile("/Users/metanmai/Code/C++/Projects/galaga/images/spaceship.png");

	if(!response)
		std::cout << "Unable to load player textures!" << std::endl;

	sprite.setTexture(texture);
	sprite.setScale(0.1f, 0.1f);
	sprite.setPosition(400 - sprite.getGlobalBounds().width / 2,600);

	mvmtspeed = 200;
}

void Player::update(float deltaTime)
{
	if(Keyboard::isKeyPressed(Keyboard::W)) {
		std::cout << "UP" << std::endl;
		move(0, -1, deltaTime);
	}

	if(Keyboard::isKeyPressed(Keyboard::A)) {
		move(-1, 0, deltaTime);
		std::cout << "LEFT" << std::endl;
	}

	if(Keyboard::isKeyPressed(Keyboard::S)) {
		std::cout << "DOWN" << std::endl;
		move(0, 1, deltaTime);
	}

	if(Keyboard::isKeyPressed(Keyboard::D)) {
		std::cout << "RIGHT" << std::endl;
		move(1, 0, deltaTime);
	}
}

void Player::render(RenderTarget &target)
{
	target.draw(sprite);
}

void Player::move(const float xdir, const float ydir, const float deltaTime)
{
	sprite.move(mvmtspeed * deltaTime * xdir, mvmtspeed * deltaTime * ydir);
	auto spritePosition = sprite.getPosition();
	std::cout << "Sprite Position: (" << spritePosition.x << ", " << spritePosition.y << ")" << std::endl;
}
