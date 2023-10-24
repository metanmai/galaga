//
// Created by Tanmai Niranjan on 24/10/23.
//

#include "Player.hpp"
#include <iostream>

Player::Player()
{
	// Textures should be loaded first.
	auto response = this->texture.loadFromFile("/Users/metanmai/Code/C++/Projects/galaga/images/spaceship.png");

	if(!response)
		std::cout << "Unable to load player textures!" << std::endl;

	this->sprite.setTexture(this->texture);
}

Player::~Player()
{

}

void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) and this->sprite.getPosition().x > 0)
            this->sprite.move(-0.25f, 0.0f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) and this->sprite.getPosition().x + this->sprite.getGlobalBounds().width < 800)
		this->sprite.move(0.25f, 0.0f);
}

void Player::render(RenderTarget &target)
{
	this->sprite.setScale(0.1f, 0.1f);

	this->sprite.setPosition(400 - this->sprite.getGlobalBounds().width / 2,
							 600);

	target.draw(this->sprite);
}
