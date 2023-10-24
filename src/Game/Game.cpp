//
// Created by Tanmai Niranjan on 23/10/23.
//

#include "Game.hpp"
#include <iostream>

Game::Game()
{
	this->window = new RenderWindow(VideoMode(800, 800), "Galaga", Style::Close | Style::Titlebar);
	this->window->setFramerateLimit(360);
	this->window->setVerticalSyncEnabled(false);

	this->player = new Player;

	this->clock = new Clock;
}

Game::~Game()
{
	delete this->player;
	delete this->window;
	delete this->clock;
}

void Game::run()
{
	while(this->window->isOpen())
	{
		float deltaTime = clock->restart().asSeconds();
		this->update(deltaTime);
		this->render();
	}
}

void Game::update(float deltaTime)
{
	Event ev{};
	while(this->window->pollEvent(ev))
		if(ev.type == Event::Closed)
			this->window->close();

	this->player->update(deltaTime);
}

void Game::render()
{
	this->window->clear();
	this->player->render(*this->window);
	this->window->display();
}